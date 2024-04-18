#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    // Open the default camera
    VideoCapture cap(0);

    // Check if camera opened successfully
    if (!cap.isOpened()) {
        std::cout << "Error opening video stream or file" << std::endl;
        return -1;
    }

    // Create a window to display the video
    namedWindow("Webcam Feed", WINDOW_NORMAL);
    namedWindow("Processed Feed", WINDOW_NORMAL);

    while (true) {
        Mat frame;
        // Capture frame-by-frame
        cap >> frame;

        // If the frame is empty, break immediately
        if (frame.empty())
            break;

        // Display the original frame
        imshow("Webcam Feed", frame);

        // Convert frame to grayscale for processing
        Mat grayFrame;
        cvtColor(frame, grayFrame, COLOR_BGR2GRAY);

        // Apply Gaussian blur to reduce noise
        Mat blurredFrame;
        GaussianBlur(grayFrame, blurredFrame, Size(5, 5), 0);

        // Perform edge detection using Canny edge detector
        Mat edges;
        Canny(blurredFrame, edges, 50, 150);

        // Display the processed frame
        imshow("Processed Feed", edges);

        // Check for ESC key press
        if (waitKey(1) == 27)
            break;
    }

    // When everything done, release the video capture object
    cap.release();

    // Close all windows
    destroyAllWindows();

    return 0;
}

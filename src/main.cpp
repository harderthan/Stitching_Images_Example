#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>

void panorama(const std::vector<cv::Mat> &_input_image);

int main() {
    std::cout << "Stitching Images Project!" << std::endl;

    return 0;
}

void panorama(const std::vector<cv::Mat> &_input_image){
    /* Pseudo Code */
    /* Read K Number of Images */
    /* Extract Features from Images Which You Read */
    /* Stitch Images */
        /* Match feature by feature, Find Best Matching Point */
        /* Estimate Transformation Matrix using RANSAC */
    /* Fine-tune to the correct value */
    /* Attach images */
}

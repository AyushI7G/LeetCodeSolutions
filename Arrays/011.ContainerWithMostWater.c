int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max = 0;

    while (left < right) {
        int h;
        if (height[left] < height[right]) {
            h = height[left];
        } 
        else {
            h = height[right];
        }

        int width = right - left;
        int area = h * width;
        if (area > max) {
            max = area;
        }
        if (height[left] < height[right]) {
            left++;
        } 
        else {
            right--;
        }
    }
    return max;
}

/*  TC = O(n^2)

int maxArea(int* height, int heightSize) {
    int max = 0;
    for(int i = 0; i < heightSize; i++){
        for(int j = i+1; j < heightSize; j++){
            if(height[i] <= height[j] && max < height[i] * (j-i)){
                max = height[i] * (j-i);
            }
            else if(height[i] >= height[j] && max < height[j] * (j-i)){
                max = height[j] * (j-i);
            }
        }
    }
    return max;
}

*/

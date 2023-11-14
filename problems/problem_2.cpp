float problemSolution2(float i, float j, float k) {
    float result;
    float i,j,k;
     float result;
     cin >> i >> j >> k;
     if (i>j && i>k){
         cout << "The maximum number is  " << i;

     }else {
         if (j>i && j>k){
             cout << "The maximum number is  " << j;
         }else{
             if (k>j && k>i){
                 cout << "The maximum number is  " << k;
             }
         }
     }

    return result;
}

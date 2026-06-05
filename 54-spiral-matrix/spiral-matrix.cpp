class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int m=arr.size();
        int n =arr[0].size();
        int tne = m*n;
        int minr=0,minc=0;
        int maxr=m-1,maxc=n-1;
        int count =0;
        vector<int> v;
        while(minr<=maxr && minc<=maxc){
            //Right
            for(int j=minc;j<=maxc && count<tne;j++){
                v.push_back(arr[minr][j]);
                count ++;
            }
            minr++;

            //Down
            for(int i=minr;i<=maxr && count<tne;i++){
                v.push_back(arr[i][maxc]);
                count++;
            }
            maxc--;

            //Left
            for(int j=maxc;j>=minc && count<tne;j--){
                v.push_back(arr[maxr][j]);
                count++;
            }
            maxr--;

            //Top
            for(int i=maxr;i>=minr && count<tne;i--){
                v.push_back(arr[i][minc]);
                count++;
            }
            minc++;
        }
        return v;
    }
};
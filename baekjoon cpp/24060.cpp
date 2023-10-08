#include <iostream>
using namespace std;

int cnt=0;
int K;
int num=-1;

void mergeSort(int arr[], int first, int last);
void merge(int arr[], int first, int mid, int last);


void mergeSort(int arr[], int first, int last){
    if (first<last)
    {
        int mid = (first+last)/2;
        mergeSort(arr, first, mid);
        mergeSort(arr, mid+1, last);
        merge(arr, first, mid, last);
    }
}

void merge(int arr[], int first, int mid, int last){
    int i=first;
    int j=mid+1;
    int t=first;
    int tmp[last];
    while (i<=mid && j<=last){
        if (arr[i]<=arr[j]) {
            tmp[t++]=arr[i++];
        }
        else
            tmp[t++]=arr[j++];
    }
     int ptr = i>mid?j:i; // 배열 남은 경우 처리를 위해 
    while (t<=last) {
        tmp[t++]=arr[ptr++];
    }
    for (int i=first; i<=last; i++){
        arr[i]=tmp[i];
        if (++cnt==K){
            num=arr[i];
            break;
        }
    }
    
}


int main(void){
    int N;
    cin >> N >> K ;
    int arr[N];
    for (int i=0; i<N; i++){
        cin >> arr[i];
    }
    mergeSort(arr, 0, N-1);
    cout << num << '\n';
}
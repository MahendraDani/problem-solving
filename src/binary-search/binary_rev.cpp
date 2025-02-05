// Binary Search Revision
// Date : 05/02/2025

#include <iostream>
using namespace std;

int floor(int arr[], int n, int x){
  int ans=-1, start = 0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + (end- start)/2;
    if(arr[mid]==x){
      ans = arr[mid];
      break;
    }else if (x < arr[mid]){
      end = mid -1;
    }else{
      ans = arr[mid];
      start = mid + 1;
    }
  }
  return ans;
}

int ceil(int arr[], int n, int x){
  int ans=-1, start = 0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + (end - start)/2;
    if(arr[mid]==x){
      ans = arr[mid];
      break;
    }else if(x < arr[mid]){
      ans = arr[mid];
      end = mid -1;
    }else{
      start = mid + 1;
    }
  }
  return ans;
}

int first_occur(int arr[], int n, int x){
  int ans=-1, start = 0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid]==x){
      ans = mid;
      end = mid -1;
    }else if(x > arr[mid]){
      start = mid + 1;
    }else{
      end = mid -1;
    }
  }
  return ans;
}

int last_occur(int arr[], int n, int x){
  int ans=-1, start=0, end=n-1;
  int mid;
  while(start <= end){
    mid = start + (end- start)/2;
    if(arr[mid]==x){
      ans = mid;
      start = mid + 1;
    }else if(x > arr[mid]){
      start = mid + 1;
    }else{
      end = mid -1;
    }
  }
  return ans;
}

int min_in_rotated(int arr[], int n){
  int ans=-1, start =0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + (end-start)/2;
    int next = (mid + 1)%n;
    int prev = (mid + n - 1)%n;

    if(arr[mid]< arr[prev] && arr[mid] < arr[next]){
      ans = arr[mid];
      break;
    }

    if(arr[0] < arr[mid]){
      start = mid + 1;
    }else{
      end = mid -1;
    }
  }
  return ans;
}

int search_rotated(int arr[],int n, int x){
  int ans =-1, start =0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + (end - start)/2;
    if(arr[mid]==x){
      ans = mid;
      break;
    }

    if(arr[start] < arr[mid]){
      if(arr[start] <= x && x < arr[mid]){
        end = mid -1;
      }else{
        start = mid + 1;
      }
    }else{
      if(arr[mid] < x && x<= arr[end]){
        start = mid + 1;
      }else{
        end = mid - 1;
      }
    }
  }
  return ans;
}

int peak_in_biotonic(int arr[], int n){
  int ans=-1, start =0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + (end - start)/2;
    int next = (mid + 1)%n;
    int prev = (mid + n -1)%n;

    if(arr[mid] > arr[prev] && arr[mid] > arr[next]){
      ans = arr[mid];
      break;
    }

    if(arr[start] < arr[mid]){
      start = mid + 1;
    }else{
      end = mid -1;
    }
  }
  return ans;
}

int search_in_biotonic(int arr[], int n, int x){
  int ans = -1, start =0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + end - 1;
    if(arr[mid] == x){
      ans = mid;
      break;
    }

    if(arr[start] < arr[mid]){
      if(x>= arr[start] && x < arr[mid]){
        end = mid - 1;
      }else{
        start = mid + 1;
      }
    }else{
      if(x>arr[mid] && x<= arr[end]){
        start = mid + 1;
      }else{
        end = mid - 1;
      }
    }
  }
  return ans;
}

int search_in_nearly_sorted(int arr[], int n, int x){
  int ans =-1, start=0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + (end - start)/2;
    int next = (mid + 1)%n;
    int prev = (mid + n - 1)%n;
    if(arr[mid]==x){
      ans = mid;
      break;
    }else if(arr[prev]==x){
      ans = prev;
      break;
    }else if(arr[next]==x){
      ans = next;
      break;
    }

    if(x < arr[mid]){
      end = mid -1;
    }else{
      start = mid + 1;
    }
  }
  return ans;
}

int main(){
  int arr[] = {5,10,12,13,14,15,30,20,40};
  int n = 9;
  int x = 20;
  cout << search_in_nearly_sorted(arr,n,x) << "\n";

  return 0;
}

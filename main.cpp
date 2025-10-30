#include <iostream>
using namespace std;
#include <ctime>
//Problem9
void reverseArray(int arr[], int start, int end) {
 while (start < end) {
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  start++;
  end--;
 }
}
//Problem4
int indexOfLargestElement(int array[], int size) {
 int maxIndex = 0;
 for (int i = 1; i < size; i++) {
  if (array[i] >= array[maxIndex]) {
   maxIndex = i;
  }
 }
 return maxIndex;
}
//Problem5
bool strictlyEqual(const int list1[],const int list2[],int size) {
 for (int i = 0; i < size; i++) {
  if (list1[i] != list2[i])
   return false;
 }
 return true;
}

 //Problem3
int minnum(int numbers[], int size) {
 for(int i = 0; i < size; i++) {
  if(numbers[i] < numbers[i+1])
   return numbers[i];
  }
 }

int main(){
int n;
cin>>n;

int the_numbers[n];
for(int i=0;i<n;i++){
cin>>the_numbers[i];
}
for(int i=0;i<n;i++){
cout<<the_numbers[i]<<"  ";
}
cout<<endl;
 //Problem1
 int a, sum=0;
 cin>>a;

 int thenm[a];
 for(int i=0;i<a;i++) {
  cin>>thenm[i];
  sum+=thenm[i];
 }
 cout<<"The sum of the numbers equals to: "<<sum<<endl;

 //Problem2
 int y, sum1=0;
 cin>>y;

 int thenm1[y];
 for(int i=0;i<y;i++) {
  cin>>thenm1[i];
  sum1+=thenm1[i];
 }
 double alph=sum1/y;
 cout<<"The average of the numbers equals to: "<<alph<<endl;

 //Problem3
 int k;
 cin >> k;
 int the_minnum[k];
 for(int i = 0; i < k; i++) {
  cin >> the_minnum[i];
 }
 cout <<"Minimum number is: "<< minnum(the_minnum, k);

 //Problem4
 const int SIZE = 15;
 int numbers[SIZE];

 cout << "Enter 15 integers: ";
 for (int i = 0; i < SIZE; i++) {
  cin >> numbers[i];
 }

 int index = indexOfLargestElement(numbers, SIZE);
 cout << "The index of the largest element is: " << index << endl;
 cout << "The largest number is: " << numbers[index] << endl;

 //Problem5
 int size1;
 cin >> size1;
 int list1[100], list2[100];

 cout << "Enter list1 elements: ";
 for (int i = 0; i < size1; i++)
  cin >> list1[i];

 cout << "Enter list2 elements: ";
 for (int i = 0; i < size1; i++)
  cin >> list2[i];

 if (strictlyEqual(list1, list2, size1))
  cout << "Two lists are strictly identical." << endl;
 else
  cout << "Two lists are not strictly identical." << endl;

 //Problem6
  int gg;
  cout << "Enter n: ";
  cin >> gg;

  char arr[gg];
  cout << "Enter characters: ";
  for (int i = 0; i < gg; i++) {
   cin >> arr[i];
  }

  int upper = 0, lower = 0, digit = 0, special = 0;

  for (int i = 0; i < n; i++) {
   if (arr[i] >= 'A' && arr[i] <= 'Z')
    upper++;
   else if (arr[i] >= 'a' && arr[i] <= 'z')
    lower++;
   else if (arr[i] >= '0' && arr[i] <= '9')
    digit++;
   else
    special++;
  }

  cout << "Uppercase:" << upper << endl;
  cout << "Lowercase:" << lower << endl;
  cout << "Digit:" << digit << endl;
  cout << "Special:" << special << endl;

 //Problem7
 int j;
 cout << "Enter the number of elements: ";
 cin >> j;

 int arr1[j];
 cout << "Enter " << j << " integers: ";
 for (int i = 0; i < j; i++) {
  cin >> arr1[i];
 }
 for (int i = 0; i < j - 1; i++) {
  for (int j = i + 1; j < j; j++) {
   if (arr1[j] < arr1[i]) {

    int temp = arr1[i];
    arr1[i] = arr1[j];
    arr1[j] = temp;
   }
  }
 }

 for (int i = 0; i < ax; i++) {
  cout << arr1[i] << " ";
 }
 cout << endl;

 //Problem8
 srand(time(0));
 int no6=0, no5=0, no4=0, no3=0, no2=0, no1=0;
 for (int i = 0; i < 10000; i++) {
  int roll = (rand() % 6) + 1;  // random number 1–6

  if (roll == 1) no1++;
  else if (roll == 2) no2++;
  else if (roll == 3) no3++;
  else if (roll == 4) no4++;
  else if (roll == 5) no5++;
  else if (roll == 6) no6++;
 }
cout<<"The number of occurances of 1: " << no1<<endl;
 cout<<"The number of occurances of 2: " << no2<<endl;
 cout<<"The number of occurances of 3: " << no3<<endl;
 cout<<"The number of occurances of 4: " << no4<<endl;
 cout<<"The number of occurances of 5: " << no5<<endl;
 cout<<"The number of occurances of 6: " << no6<<endl;

//Problem9
 int af;
 cin >> af;
 int array007[af];

 for (int i = 0; i < af; i++) {
  cin >> array007[i];
 }

 reverseArray(array007, 0, af - 1);
 for (int i = 0; i < af; i++) {
  cout << array007[i] << " ";
 }



 return 0;
}
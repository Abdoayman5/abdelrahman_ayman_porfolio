 int size=5;
 int arr[size];
int element=0;
int index =0;

cout<<"enter your 5  numbers : ";
for(int i=0; i<size; i++){
   
 cin>>arr[i];
}
cout<<" array before editing : ";
for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<" enter your element : ";
cin>>element;
cout<<" enter your index :  ";
cin>>index;
if(index>size){
    cout<<"invalid index "<<endl;
}
else{
    for(int i=size; i>index; i--){
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    size++;
    
} cout<<endl;
    cout<<" array after editing : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

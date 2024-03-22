#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Todo{
    string task_name;
    bool complete;
};

// creating a vector as task
vector<Todo>task;

void add_task(){
  string todo;
  cout<<"Enter the task you want to add : ";
  //taking input task
  cin>>todo;
  task.push_back({todo, false});
  cout<<"Task added : "<<todo<<endl;
}

void show_task(){
  if(task.empty()){
    cout<<"No task is found \n";
  } else {
      for(int i=0; i < task.size(); i++){
          string status = task[i].complete ? "completed" : "Pending";
          cout<<i+1<<"."<<task[i].task_name<<"-"<<status<<endl;
      }
  }
}

void completed(){
  show_task();
  int n;
  cout<<"Enter the task that is completed : ";
  cin>>n;
  if(n>=1 && n<=task.size()){
    task[n-1].complete = true;
    cout<<"the task marked as completed";
  }else{
    cout<<"Invalid input";
  }
}

void remove_task(){
  show_task();
  int n;
  cout<<"Enter the task you want to delete : ";
  cin>>n;
  if(n>=1&&n<=task.size()){
    cout<<"Task removed : "<<task[n-1].task_name<<endl;
    task.erase(task.begin()+n-1);
  }else{
    cout<<"invalid input"<<endl;
  }
}

int main()
{
   cout<<"****WELCOME TO TO-DO LIST****"<<endl;

   while(true){
      cout<<"Options -- \n"
          <<"1. Add task \n"
          <<"2. View task \n"
          <<"3. Mark as completed \n"
          <<"4. Remove Task\n"
          <<"5. Quit \n";
      int choice;
      cout<<"Enter your choice : ";
      cin>>choice;
      switch(choice){
        case 1 :
          add_task();
          break;
        case 2 :
          show_task();
          break;
        case 3 :
          completed();
          break;
        case 4 :
          remove_task();
          break;
        case 5 :
          return 0;
        default:
          cout<<"Entered invalid input\n"<<endl;
      }

   }
   return 0;
}
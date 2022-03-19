// vector<pair<pair<string, int>, pair<string, int>>>
//              Name    skills count

#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;


// class contributor{
//   public: 
//   string name;
//   int skill_count;
//   vector<pair<string, int>> skill_detail;
//   contributor(string Name,int count){
//     name= Name;
//     skill_count= count;
//   }
//   void inputSkills(string skill, int level){
//     skill_detail.push_back({skill,level});
//   }

// };







int main(){
  int numContributor, numProject;
  cin>>numContributor>>numProject;
  vector<pair<string, int>> contributor;
  unordered_map<string, pair<string, int>> skills;
  for(int i=0;i<numContributor;i++){
    string a;
    int num;
    cin>>a>>num;
    contributor.push_back({a,num});
    for(int i=0;i<num;i++){
      string skill;
      int level;
      cin>>skill>> level;
      skills[a]= {skill,level};
    }
  }
  }
  }
  }

  // contributor c;

}
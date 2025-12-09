#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <string>
using namespace std;

class SportCricket{
    public:
        void dominator(short years){
            years+=1;
            cout<<"still does.....! "<<years<<'\n';
            currentEra();
        }
        virtual void currentEra()=0;
};
class TremendousGame:public SportCricket{
  public:
    virtual void currentEra() override final{
        cout<<"Always a tracer-bullet game....UNSTOPPABLE!---> "<<'\n';
    }
};
struct cricket {
    string players;
    short period;
    int runs;  // Use int for potentially large runs
};

struct countries {
    string nation;
    short code;

    // Define operator< for set to maintain sorted order by code
      bool operator<(const countries& other) const {
        if (code < other.code) return true;
        if (code > other.code) return false;
        return nation < other.nation;
    }
};

int main() {
    vector<cricket> legends = {
        {"gavaskar", 19, 20000},
        {"sachin", 19, 27000},
        {"virat", 20, 25000}  // corrected runs number for more realistic data
    };

    list<cricket> youngsters;
    youngsters.push_back({"jadeja", 20, 17000});

    vector<countries> pride = {
        {"India", 1},
        {"Australia", 2},
        {"Newzeland", 3}
    };

    set<countries> unique;
    // Insert unique countries from pride vector plus South Africa once
    unique.insert(pride.begin(), pride.end());
    unique.insert({"southafrica", 4});

    map<string, short> injection = {
        {"afghanistan", 5},
        {"england", 6},
        {"srilanka", 7}
    };

    // Display legends
    for (const auto& inst : legends) {
        cout << "Player: " << inst.players << "\n";
        cout << "Period: " << inst.period << "\n";
        cout << "Runs: " << inst.runs << "\n";
    }
    
    TremendousGame inst2;
    short b=100;
    cout<<"initial phase of domination: "<<b<<'\n';
    inst2.dominator(b);
    cout<<"\n";
    cout<<'\n';
    cout<<"\n";
    cout<<'\n';
    cout<<"DON'T EVEN DARE TO STOP IT... IF YOU! "<<"\n"<< "you can?"<<'\n';

    return 0;
}







- 🤡 "Modern languages dazzle with simplicity, but when it comes to SYSTEM DESIGN, C++ flexes muscle 🏗️ that decades of raw hardware mastery built—can't compare that legacy with your fancy scripting sugar-coating!"  
- ⚡ AGILITY? C++ templates & polymorphism storm past the "safe & slow" abstractions that modern kids cling to like training wheels 🚲—because real power means full control, not babysitting code!  
- 🧠 MEMORY MANAGEMENT in C++ is an art of precision, not a clueless garbage collector throwing tantrums—modern languages can't touch this fine-tuned manual memory dance 🎯.  
- 🔗 COMPATIBILITY? While the crowd juggles ecosystems, C++ smoothly harnesses native code, legacy APIs, and device drivers, making it the true polyglot of performance languages 🌐.  
- 📚 Then there's STL—the original powerhouse toolbox, packed with vectors, lists, sets, and maps, orchestrated here to model cricket legends & nations; from polymorphic classes blazing unstoppable games 🔥 to elegant ordered sets, this snippet screams SYSTEM DOMINANCE!  
- 💥 "DON'T EVEN DARE TO STOP IT... IF YOU CAN!" is not just a phrase, it's the C++ battlecry echoing across decades of unstoppable software legacy. Modern languages? Still practicing their swing. 🏏


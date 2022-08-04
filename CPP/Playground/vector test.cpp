#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;

/**
 * Bring data on patient samples from the diagnosis machine to the laboratory with enough molecules to produce medicine!
 **/

 //robot class
 //robot can carry 3 samples
 //robot can carry 10 molecules

 class robot{
     public:
        int sCount;  // make a location to store the smaple IDs that we're carrying. (so we don't have to index the whole list every time)
        vector<int> sIDs;
        int storage = 0; //variable to store how much space we're using. can only hold 10...
        int bTarget;

 };

 class Sample{
     public:
        int sample_id;
        int carried_by;
        int rank;
        string expertise_gain;
        int health;
        int cost_a, cost_b, cost_c, cost_d, cost_e;
 };


int main()
{
    //ignore this for now! setup to read input later.... always zero
    int project_count;
    cin >> project_count; cin.ignore();
    for (int i = 0; i < project_count; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e; cin.ignore();
    }

    robot bot1, bot2; //create our robot objects

    // game loop
    while (1) {

        //Read information for both bots, we are always bot 1 (currently there are two total).
        for (int i = 0; i < 2; i++) {
            string target;
            int eta;  //ignore for now
            int score; //player health [WIN CONDITION]
            int storage_a, storage_b, storage_c, storage_d, storage_e;
            int expertise_a, expertise_b, expertise_c, expertise_d, expertise_e; //ignore for now
            cin >> target >> eta >> score >> storage_a >> storage_b >> storage_c >> storage_d >> storage_e >> expertise_a >> expertise_b >> expertise_c >> expertise_d >> expertise_e; cin.ignore();
            if(i == 0){
                cerr << "BOT1" << endl;
                cerr << "Target: " << target << endl; //where is the specified bot?
                cerr << "Score: " << score << endl; //what is the bot score?
            } else{
                //cerr << "BOT2" << endl;
            }

        }
        
        //get the number of available molecules. Ignore for now
        int available_a, available_b, available_c, available_d, available_e;
        cin >> available_a >> available_b >> available_c >> available_d >> available_e; cin.ignore();

        //get the number of samples... Shared by both bots.
        int sample_count;
        cin >> sample_count; cin.ignore();
        cerr << "Sample Count: " << sample_count << endl;
        vector<Sample> sample;
        
        //update all sample data
        //Step through the list of all available samples and get their information
        
        bot1.sCount = 0;
        for (int i = 0; i < sample_count; i++) {
            
            Sample tSample;

            cin >> tSample.sample_id >> tSample.carried_by >> tSample.rank >> tSample.expertise_gain >> tSample.health;
            cin >> tSample.cost_a >> tSample.cost_b >> tSample.cost_c >> tSample.cost_d >> tSample.cost_e; cin.ignore();
            
            if(tSample.carried_by == 0){
                bot1.sCount++;
                bot1.sIDs.push_back(tSample.sample_id);
                cerr << "Stored " << tSample.sample_id << endl;
            }
            
            sample.push_back(tSample);
            
            /*
            cerr << "Sample " << i << ":" << endl;
            cerr << sample[i].sample_id << endl;
            cerr << sample[i].carried_by << endl;
            cerr << sample[i].rank << endl;
            cerr << sample[i].expertise_gain << endl;
            cerr << sample[i].health << endl;
            cerr << "Cost A: " << sample[i].cost_a << endl;
            cerr << "Cost B: " << sample[i].cost_b << endl;
            cerr << "Cost C: " << sample[i].cost_c << endl;
            cerr << "Cost D: " << sample[i].cost_d << endl;
            cerr << "Cost E: " << sample[i].cost_e << endl;
            */

        }
        cerr << "sample vector size: " << sample.size() << endl;
        cerr << "bot store size " << bot1.sIDs.size() << endl;

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        //go to the diag station
        cout << "GOTO DIAGNOSIS" << endl;

        //if the bot has space....
        if(bot1.sIDs.size() < 3){
            for(int i = 0; i < sample.size(); i++){ //start stepping through the available samples
                cerr << "who's carrying the sample: " << sample[i].carried_by << endl;
                if(sample[i].carried_by == -1){ //if the next sample is in the cloud, copy the code to the bot and break the loop
                    cerr << "Pushing sample to bot1" << endl;
                    cout << "CONNECT " << sample[i].sample_id << endl;
                    cerr << "break..." << endl;
                    break;
                }
            cerr << "are we still in the for loop?" << endl;

            }
        }


        //gather the first three samples available.

        


        //collect molecules for each sample
        
        // if full or if all molecules collected for samples, proceed to lab and deposite. 

        // if samples remain return to MDM (molecule distribution module)



    }
}
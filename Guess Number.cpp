#include<bits/stdc++.h>
using namespace std;
#define ll long long
void description()
{
    /*
            Let's Test Your Guess
        How to play?
        The game will generate a random number within a specific range (e.g., 1 to 100).
        You have to enter a number and submit your guess.
        If your guess is too low, the game will tell you: "Too low! Try a higher number."
        If your gue is too high, the game will say: "Too high! Try a lower number."
        If your guess is correct Congratulations! you can play the next level.
        for each level you have 10 life. You will loss 1 life for each incorrect guess.ss
    */
   cout<<"\t\tLet's Test Your Guess\n";
    cout<<"\t\tHow to play?\n";
    cout<<"\t\tThe game will generate a random number within a specific range (e.g., 1 to 100).\n";
    cout<<"\t\tYou have to enter a number and submit your guess.\n";
    cout<<"\t\tIf your guess is too low, the game will tell you: \"Too low! Try a higher number.\"\n";
    cout<<"\t\tIf your guess is too high, the game will say: \"Too high! Try a lower number.\"\n";
    cout<<"\t\tIf your guess is correct Congratulations! you can play the next level.\n";
    cout<<"\t\tfor each level you have 10 life. You will loss 1 life for each incorrect guess.\n";
    cout<<"\t";
}
void printv(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int play()
{
    int x;
    cout<<"If you want to continue press 1 otherwise press 0\n";
    cin>>x;
    return x;
}
int main()
{
    description();
    f:
     int key=play();
     ll level=1;
    while(key)
    {
        ll life=10;
        ll range=pow(10,level);
        ll number=rand()%range+1;
        cout<<"Level "<<level<<endl;
        cout<<"Range is 1 to "<<range<<endl;
        cout<<"You have 10 life\n";
        vector<int> prev_guess;
        while(life)
        {
            cout<<"Enter your guess\n";
            ll guess;
            cin>>guess;
            prev_guess.push_back(guess);
            printv(prev_guess);
            if(guess==number)
            {

                cout<<"Congratulations! Your guess is correct\n";
                break;
            }
            else if(guess<number)
            {
                cout<<"Too low! Try a higher number.\n";
            }
            else
            {
                cout<<"Too high! Try a lower number.\n";
            }
            life--;
            cout<<"You have "<<life<<" life remaining\n";
        }
        if(life==0)
        {
            cout<<"You have lost the game\n";
            goto f;
            break;
        }
        level++;
        key=play();
    }

    return 0;

}

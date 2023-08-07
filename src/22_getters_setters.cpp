#include <iostream>
using namespace std;

class Movie
{
private:
    string rating;

    /*
    public means any other programs/codes can access
    */
public:
    string title;
    string director;
    Movie(string title, string director, string rating)
    {
        this->title = title;
        this->director = director;
        setRating(rating);
    }

    // setter
    void setRating(string rating)
    {
        if (rating == "G" || rating == "PG" ||
            rating == "PG-13" || rating == "R" ||
            rating == "NR")
        {
            this->rating = rating;
        } else {
            cout << "Not a valid rating!" << endl;
            this->rating  = "NR";
        }
    }

    // getter
    string getRating() {
        return this->rating;
    }
    
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("Blahblah");
    cout << avengers.getRating();

    return 0;
}
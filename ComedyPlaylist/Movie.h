#ifndef MOVIE_H
#define MOVIE_H

class Movie : public Video {
  public:            //public class functions
    Movie();
    Movie(string, string, int, string, string, string);
    void PrintItem();
  private:          //private variables
    bool has_sequel;
};

#endif           //Indicate end of header file

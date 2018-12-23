#ifndef TVSHOW_H
#define TVSHOW_H

class TVShow : public Video{
  public:            //public class functions
    TVShow();
    TVShow(string, string, int, string, string, string);
    void PrintItem();
  private:          //private variables
    string season;
    string episode;
};

#endif           //Indicate end of header file

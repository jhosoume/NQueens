#ifndef QUEEN
#define QUEEN

class Queen {
public:
  Queen();
  Queen(int, int);
  int row, column;
  unsigned int id;
  bool operator ==(const Queen&);

private:
  static unsigned int current_id;
};

#endif

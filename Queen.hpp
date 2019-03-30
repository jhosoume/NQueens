#ifndef QUEEN
#define QUEEN

class Queen {
public:
  Queen();
  Queen(unsigned int, unsigned int);
  unsigned int row, column, id;
  bool operator ==(const Queen&);

private:
  static unsigned int current_id;
};

#endif

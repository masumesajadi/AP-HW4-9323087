#ifndef CTEXT_H
#define CTEXT_H

#include<string>
#include<sstream>

class CText {
 public:
  CText(std::string);
  CText();
  CText(const CText&);
  CText(CText&&);
  virtual ~CText();

  CText& operator=(const CText&);
  CText& operator=(CText&&);
  CText operator+(const CText&) const;
  CText operator+(const std::string&) const;

  void setText(std::string);
  std::string getText() const;
  
 private:  
  char* m_Txt{};  
};

#endif

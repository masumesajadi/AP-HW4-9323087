#include<iostream>
#include<string>
#include<sstream>
#include"ctext.h"

// Constructor
CText::CText(std::string a) {
  //std::cout << "CText Constructor (Input: String)" << std::endl;
  
  size_t length{};
  
  while(a[++length]); 
  
  m_Txt = new char[length];
  for(size_t i{}; i < length; i++)
    m_Txt[i] = a[i];
}

// Default Constructor
CText::CText() {
  //std::cout << "CText Default Constructor" << std::endl;  
  m_Txt = nullptr;
}

// Copy Constructor
CText::CText(const CText& a) {
  //std::cout << "CText Copy Constructor" << std::endl;
  
  size_t length{};
  while(a.m_Txt[++length]);

  m_Txt = new char[length];
  for(size_t i{}; i < length; i++)
    m_Txt[i] = a.m_Txt[i]; 
}

// Move Constructor
CText::CText(CText&& a) {
  //std::cout << "CText Move Constructor" << std::endl;
  m_Txt = a.m_Txt;
  a.m_Txt = nullptr;
}

// Destructor
CText::~CText() {
  //std::cout << "CText Destructor" << std::endl;  
  delete[] m_Txt;
}

// Operator (=)
CText& CText::operator=(const CText& a) {
  size_t length{};

  delete[] m_Txt;
  while(a.m_Txt[++length]);
  m_Txt = new char[length];
  
  for(size_t i{}; i < length; i++)
    m_Txt[i] = a.m_Txt[i];

  return *this;
}

// Operator (=) *move
CText& CText::operator=(CText&& a) {
  m_Txt = a.m_Txt;
  a.m_Txt = nullptr;

  return *this;
}

// Operator (+) (const CText&)
CText CText::operator+(const CText& a) const {
  CText temp{};
  size_t len1{};
  size_t len2{};

  while(m_Txt[++len1]);
  while(a.m_Txt[++len2]);

  temp.m_Txt = new char[len1 + len2];
  for(size_t i{}; i < (len1 + len2); i++)
  {
    if(i < len1)
      temp.m_Txt[i] = m_Txt[i];
    else
      temp.m_Txt[i] = a.m_Txt[i-len1];
  }

  return temp;
}

// Operator (+) (const string&)
CText CText::operator+(const std::string& a) const {
  CText temp{};
  size_t len1{};
  size_t len2{};

  while(m_Txt[++len1]);
  while(a[++len2]);

  temp.m_Txt = new char[len1 + len2];
  for(size_t i{}; i < (len1 + len2); i++)
  {
    if(i < len1)
      temp.m_Txt[i] = m_Txt[i];
    else
      temp.m_Txt[i] = a[i-len1];
  }

  return temp;
}

// SetText function
void CText::setText(std::string a) {
  size_t length{};

  delete[] m_Txt;
  while(a[++length]);
  m_Txt = new char[length];

  for(size_t i{}; i < length; i++)
    m_Txt[i] = a[i]; 
}

// GetText function
std::string CText::getText() const {
  std::string str{m_Txt};
  return str;
}

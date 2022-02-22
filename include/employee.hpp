#include <string>

class Employee: public Person 
{
  private:
    std::string company_;
    std::string start_day_;
    double sallary_;
  public:
   void company(const std::string& company) {company_ = company;}
   const std::string& company() const { return company_; } 

   void start_day(const std::string& start_day) {start_day_ = start_day;}
   const std::string& start_day() const { return start_day_; } 

   void sallary(const double& sallary) {sallary_ = sallary;}
   const double& sallary() const { return sallary_; } 
};

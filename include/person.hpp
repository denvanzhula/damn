#include <string>

class Person 
{
  private:
    std::string name_;
    std::string birth_day_;
    double weight_;
  public:
    Person();
    const std::string& name() const { return this->name_;}
    void name(const std::string& name) { this->name_ = name;}

    const std::string& birth_day() const { return this->birth_day_;}
    void birth_day(const std::string& birth_day) { this->birth_day_ = birth_day;}

    const double& weight() const { return this->weight_;}
    void weight(const double& weight) { this->weight_ = weight;}

    int age() const;

};
// ���֣�match�������Ǿ�д���match������ƥ�䰡.
// ���ˣ��淶һ�£�һ�в�����80����ĸaz������д�꺯��ǩ������
// When you are ok, call me at QQ. ��Ҳϴ���� ͵�������һ�ûϴ��------��д��..
// дmatch����-regex�ఴ���޸�
// i'm back!!!!!!!!!!!!дɶ���أ������X�m������
// �ţ�������װ����
// �ҵ��������ȥϴ�裬����10���ӣ�����д�ţ��Ȼ��һ���ʱ�鷳˵һ��д��ɶ������
// �������ͱ���������� ....hhhhhhhhh
#include <string_view>
//#include <map>
#include <set>
#include <vector>
#include <iostream>
#include <string>
#include <cassert>
#include <stack>
class regex {
public:
  regex(std::string_view const& pattern_string) : pattern_(pattern_string) {}
  /*std::string*/auto const& pattern() const { return pattern_; }
private:
  std::string pattern_; 
};

/// @brief Determine if a regex matches a src string.
/// @param [in]  pattern
/// @param [out] parameters contains matched results if src matches pattern.
/// @return true if src matches pattern.
bool match(regex const& regex, std::string_view const& src,
  std::vector<std::string>& parameters) {

  // example:
  //   regex = "a(bc)"; [src = "abc"]; parameters = { "bc" }; �����������Ŷ~����aȥ����
  // question: regex = "[a-Z]*",src = "para", parameters = { "para" } ��yes
  // �ҵĴ����д���������أ��ҵȻỹ��ƭ������װ��˯��
  // ����
  // �����������������Ҫʵ�ֵģ���һ����ʲô���Ҿ������һ������
  // �ǻ���˯����, �����specials��ʵ�����
  // ��ʱ�������д��Ͱ�cpp�ĵ���qq�ɣ�����Ҫ�����ˣ�?����������������?????��
  // ��github�������ǾͰ���ַ����en���ǾͰݰ��ǣ�����wanan
  static std::set<char> specials{ '(', ')', '.', '*' };
  static std::set<char> round_brackets{'(', ')'};
  std::stack<char> stack;

  std::size_t i_pattern = 0;
  std::size_t i_src = 0;
  auto& pattern = regex.pattern();
  while (i_pattern != pattern.size() && i_src != src.size()) {
    // �ж�pattern[i_pattern]�Ƿ��������ַ�
    if (specials.contains(pattern[i_pattern])) {
      if (pattern[i_pattern] == ')') {

      }
    }
    else {
      if (pattern[i_pattern] != src[i_src]) {
        return false;
      }
    }
  }

  auto size = pattern.size();
  auto p = 0;
  while (p < size) {
    auto letter = pattern.find("[a-Z]", p);
    
  }
  return true;
}

int main() {
  std::string url;
  std::vector<std::string> parameters;
  std::cin >> url;
  assert(match(regex(".*"), url, parameters) == true);
  std::size_t count = 0;
  for (auto const& parameter : parameters) {
    std::cout << count << parameter <<'\n';
    ++count;
  }
  return 0;
}
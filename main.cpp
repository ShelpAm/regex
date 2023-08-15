// 动手！match啊，我们就写这个match函数。匹配啊.
// 对了，规范一下，一行不超过80个字母az。等我写完函数签名。好
// When you are ok, call me at QQ. 我也洗澡了 偷懒王的我还没洗澡------快写吧..
// 写match函数-regex类按需修改
// i'm back!!!!!!!!!!!!写啥啊呜（来自蒟蒻的提问
// 嗯，不超过装订线
// 我的妈妈叫我去洗澡，等我10分钟，你先写着，等会我回来时麻烦说一下写了啥呜呜呜
// 聊天区就别妨碍代码了 ....hhhhhhhhh
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
  //   regex = "a(bc)"; [src = "abc"]; parameters = { "bc" }; 这个捏呜呜呜哦~，那a去哪了
  // question: regex = "[a-Z]*",src = "para", parameters = { "para" } 吗？yes
  // 我的代码该写到哪呜呜呜，我等会还得骗过我妈装个睡（
  // 不是
  // 这样，你告诉我现在要实现的，第一个是什么，我就想这个一个晚上
  // 那还是睡觉吧, 下面的specials，实现这个
  // 到时候你今晚写完就把cpp文档放qq吧，我妈要打我了（?呜呜呜呜呜呜呜呜?????，
  // 放github可以吗（那就把网址给我en，那就拜拜惹，晚安捏wanan
  static std::set<char> specials{ '(', ')', '.', '*' };
  static std::set<char> round_brackets{'(', ')'};
  std::stack<char> stack;

  std::size_t i_pattern = 0;
  std::size_t i_src = 0;
  auto& pattern = regex.pattern();
  while (i_pattern != pattern.size() && i_src != src.size()) {
    // 判断pattern[i_pattern]是否是特殊字符
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

// Generated from /Users/perbone/Work/luascript/Lua.g4 by ANTLR 4.10.1


#include "LuaListener.h"

#include "LuaParser.h"


using namespace antlrcpp;
using namespace parser::generated;

using namespace antlr4;

namespace {

struct LuaParserStaticData final {
  LuaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LuaParserStaticData(const LuaParserStaticData&) = delete;
  LuaParserStaticData(LuaParserStaticData&&) = delete;
  LuaParserStaticData& operator=(const LuaParserStaticData&) = delete;
  LuaParserStaticData& operator=(LuaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag luaParserOnceFlag;
LuaParserStaticData *luaParserStaticData = nullptr;

void luaParserInitialize() {
  assert(luaParserStaticData == nullptr);
  auto staticData = std::make_unique<LuaParserStaticData>(
    std::vector<std::string>{
      "chunk", "block", "stat", "attnamelist", "attrib", "laststat", "label", 
      "funcname", "varlist", "namelist", "explist", "exp", "prefixexp", 
      "functioncall", "varOrExp", "var", "varSuffix", "nameAndArgs", "args", 
      "functiondef", "funcbody", "parlist", "tableconstructor", "fieldlist", 
      "field", "fieldsep", "operatorOr", "operatorAnd", "operatorComparison", 
      "operatorStrcat", "operatorAddSub", "operatorMulDivMod", "operatorBitwise", 
      "operatorUnary", "operatorPower", "number", "string"
    },
    std::vector<std::string>{
      "", "';'", "'='", "'break'", "'goto'", "'do'", "'end'", "'while'", 
      "'repeat'", "'until'", "'if'", "'then'", "'elseif'", "'else'", "'for'", 
      "','", "'in'", "'function'", "'local'", "'<'", "'>'", "'return'", 
      "'continue'", "'::'", "'.'", "':'", "'nil'", "'false'", "'true'", 
      "'...'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'or'", "'and'", 
      "'<='", "'>='", "'~='", "'=='", "'..'", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'//'", "'&'", "'|'", "'~'", "'<<'", "'>>'", "'not'", "'#'", 
      "'^'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "NAME", "NORMALSTRING", "CHARSTRING", "LONGSTRING", 
      "INT", "HEX", "FLOAT", "HEX_FLOAT", "COMMENT", "LINE_COMMENT", "WS", 
      "SHEBANG"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,68,426,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,1,0,1,0,1,0,1,1,5,1,79,8,1,10,1,12,1,82,9,1,1,1,3,1,85,8,
  	1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,
  	2,121,8,2,10,2,12,2,124,9,2,1,2,1,2,3,2,128,8,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,3,2,140,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,166,8,2,3,
  	2,168,8,2,1,3,1,3,1,3,1,3,1,3,5,3,175,8,3,10,3,12,3,178,9,3,1,4,1,4,1,
  	4,3,4,183,8,4,1,5,1,5,3,5,187,8,5,1,5,1,5,1,5,3,5,192,8,5,3,5,194,8,5,
  	1,6,1,6,1,6,1,6,1,7,1,7,1,7,5,7,203,8,7,10,7,12,7,206,9,7,1,7,1,7,3,7,
  	210,8,7,1,8,1,8,1,8,5,8,215,8,8,10,8,12,8,218,9,8,1,9,1,9,1,9,5,9,223,
  	8,9,10,9,12,9,226,9,9,1,10,1,10,1,10,5,10,231,8,10,10,10,12,10,234,9,
  	10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,3,11,251,8,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,5,11,285,8,11,10,11,12,11,
  	288,9,11,1,12,1,12,5,12,292,8,12,10,12,12,12,295,9,12,1,13,1,13,4,13,
  	299,8,13,11,13,12,13,300,1,14,1,14,1,14,1,14,1,14,3,14,308,8,14,1,15,
  	1,15,1,15,1,15,1,15,1,15,3,15,316,8,15,1,15,5,15,319,8,15,10,15,12,15,
  	322,9,15,1,16,5,16,325,8,16,10,16,12,16,328,9,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,3,16,336,8,16,1,17,1,17,3,17,340,8,17,1,17,1,17,1,18,1,18,3,
  	18,346,8,18,1,18,1,18,1,18,3,18,351,8,18,1,19,1,19,1,19,1,20,1,20,3,20,
  	358,8,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,3,21,367,8,21,1,21,3,21,370,
  	8,21,1,22,1,22,3,22,374,8,22,1,22,1,22,1,23,1,23,1,23,1,23,5,23,382,8,
  	23,10,23,12,23,385,9,23,1,23,3,23,388,8,23,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,3,24,400,8,24,1,25,1,25,1,26,1,26,1,27,1,27,1,
  	28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,
  	35,1,35,1,36,1,36,1,36,0,1,22,37,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,
  	0,8,2,0,1,1,15,15,2,0,19,20,38,41,1,0,43,44,1,0,45,48,1,0,49,53,3,0,44,
  	44,51,51,54,55,1,0,61,64,1,0,58,60,455,0,74,1,0,0,0,2,80,1,0,0,0,4,167,
  	1,0,0,0,6,169,1,0,0,0,8,182,1,0,0,0,10,193,1,0,0,0,12,195,1,0,0,0,14,
  	199,1,0,0,0,16,211,1,0,0,0,18,219,1,0,0,0,20,232,1,0,0,0,22,250,1,0,0,
  	0,24,289,1,0,0,0,26,296,1,0,0,0,28,307,1,0,0,0,30,315,1,0,0,0,32,326,
  	1,0,0,0,34,339,1,0,0,0,36,350,1,0,0,0,38,352,1,0,0,0,40,355,1,0,0,0,42,
  	369,1,0,0,0,44,371,1,0,0,0,46,377,1,0,0,0,48,399,1,0,0,0,50,401,1,0,0,
  	0,52,403,1,0,0,0,54,405,1,0,0,0,56,407,1,0,0,0,58,409,1,0,0,0,60,411,
  	1,0,0,0,62,413,1,0,0,0,64,415,1,0,0,0,66,417,1,0,0,0,68,419,1,0,0,0,70,
  	421,1,0,0,0,72,423,1,0,0,0,74,75,3,2,1,0,75,76,5,0,0,1,76,1,1,0,0,0,77,
  	79,3,4,2,0,78,77,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,
  	84,1,0,0,0,82,80,1,0,0,0,83,85,3,10,5,0,84,83,1,0,0,0,84,85,1,0,0,0,85,
  	3,1,0,0,0,86,168,5,1,0,0,87,88,3,16,8,0,88,89,5,2,0,0,89,90,3,20,10,0,
  	90,168,1,0,0,0,91,168,3,26,13,0,92,168,3,12,6,0,93,168,5,3,0,0,94,95,
  	5,4,0,0,95,168,5,57,0,0,96,97,5,5,0,0,97,98,3,2,1,0,98,99,5,6,0,0,99,
  	168,1,0,0,0,100,101,5,7,0,0,101,102,3,22,11,0,102,103,5,5,0,0,103,104,
  	3,2,1,0,104,105,5,6,0,0,105,168,1,0,0,0,106,107,5,8,0,0,107,108,3,2,1,
  	0,108,109,5,9,0,0,109,110,3,22,11,0,110,168,1,0,0,0,111,112,5,10,0,0,
  	112,113,3,22,11,0,113,114,5,11,0,0,114,122,3,2,1,0,115,116,5,12,0,0,116,
  	117,3,22,11,0,117,118,5,11,0,0,118,119,3,2,1,0,119,121,1,0,0,0,120,115,
  	1,0,0,0,121,124,1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,123,127,1,0,0,
  	0,124,122,1,0,0,0,125,126,5,13,0,0,126,128,3,2,1,0,127,125,1,0,0,0,127,
  	128,1,0,0,0,128,129,1,0,0,0,129,130,5,6,0,0,130,168,1,0,0,0,131,132,5,
  	14,0,0,132,133,5,57,0,0,133,134,5,2,0,0,134,135,3,22,11,0,135,136,5,15,
  	0,0,136,139,3,22,11,0,137,138,5,15,0,0,138,140,3,22,11,0,139,137,1,0,
  	0,0,139,140,1,0,0,0,140,141,1,0,0,0,141,142,5,5,0,0,142,143,3,2,1,0,143,
  	144,5,6,0,0,144,168,1,0,0,0,145,146,5,14,0,0,146,147,3,18,9,0,147,148,
  	5,16,0,0,148,149,3,20,10,0,149,150,5,5,0,0,150,151,3,2,1,0,151,152,5,
  	6,0,0,152,168,1,0,0,0,153,154,5,17,0,0,154,155,3,14,7,0,155,156,3,40,
  	20,0,156,168,1,0,0,0,157,158,5,18,0,0,158,159,5,17,0,0,159,160,5,57,0,
  	0,160,168,3,40,20,0,161,162,5,18,0,0,162,165,3,6,3,0,163,164,5,2,0,0,
  	164,166,3,20,10,0,165,163,1,0,0,0,165,166,1,0,0,0,166,168,1,0,0,0,167,
  	86,1,0,0,0,167,87,1,0,0,0,167,91,1,0,0,0,167,92,1,0,0,0,167,93,1,0,0,
  	0,167,94,1,0,0,0,167,96,1,0,0,0,167,100,1,0,0,0,167,106,1,0,0,0,167,111,
  	1,0,0,0,167,131,1,0,0,0,167,145,1,0,0,0,167,153,1,0,0,0,167,157,1,0,0,
  	0,167,161,1,0,0,0,168,5,1,0,0,0,169,170,5,57,0,0,170,176,3,8,4,0,171,
  	172,5,15,0,0,172,173,5,57,0,0,173,175,3,8,4,0,174,171,1,0,0,0,175,178,
  	1,0,0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,7,1,0,0,0,178,176,1,0,0,0,
  	179,180,5,19,0,0,180,181,5,57,0,0,181,183,5,20,0,0,182,179,1,0,0,0,182,
  	183,1,0,0,0,183,9,1,0,0,0,184,186,5,21,0,0,185,187,3,20,10,0,186,185,
  	1,0,0,0,186,187,1,0,0,0,187,194,1,0,0,0,188,194,5,3,0,0,189,191,5,22,
  	0,0,190,192,5,1,0,0,191,190,1,0,0,0,191,192,1,0,0,0,192,194,1,0,0,0,193,
  	184,1,0,0,0,193,188,1,0,0,0,193,189,1,0,0,0,194,11,1,0,0,0,195,196,5,
  	23,0,0,196,197,5,57,0,0,197,198,5,23,0,0,198,13,1,0,0,0,199,204,5,57,
  	0,0,200,201,5,24,0,0,201,203,5,57,0,0,202,200,1,0,0,0,203,206,1,0,0,0,
  	204,202,1,0,0,0,204,205,1,0,0,0,205,209,1,0,0,0,206,204,1,0,0,0,207,208,
  	5,25,0,0,208,210,5,57,0,0,209,207,1,0,0,0,209,210,1,0,0,0,210,15,1,0,
  	0,0,211,216,3,30,15,0,212,213,5,15,0,0,213,215,3,30,15,0,214,212,1,0,
  	0,0,215,218,1,0,0,0,216,214,1,0,0,0,216,217,1,0,0,0,217,17,1,0,0,0,218,
  	216,1,0,0,0,219,224,5,57,0,0,220,221,5,15,0,0,221,223,5,57,0,0,222,220,
  	1,0,0,0,223,226,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,19,1,0,0,
  	0,226,224,1,0,0,0,227,228,3,22,11,0,228,229,5,15,0,0,229,231,1,0,0,0,
  	230,227,1,0,0,0,231,234,1,0,0,0,232,230,1,0,0,0,232,233,1,0,0,0,233,235,
  	1,0,0,0,234,232,1,0,0,0,235,236,3,22,11,0,236,21,1,0,0,0,237,238,6,11,
  	-1,0,238,251,5,26,0,0,239,251,5,27,0,0,240,251,5,28,0,0,241,251,3,70,
  	35,0,242,251,3,72,36,0,243,251,5,29,0,0,244,251,3,38,19,0,245,251,3,24,
  	12,0,246,251,3,44,22,0,247,248,3,66,33,0,248,249,3,22,11,8,249,251,1,
  	0,0,0,250,237,1,0,0,0,250,239,1,0,0,0,250,240,1,0,0,0,250,241,1,0,0,0,
  	250,242,1,0,0,0,250,243,1,0,0,0,250,244,1,0,0,0,250,245,1,0,0,0,250,246,
  	1,0,0,0,250,247,1,0,0,0,251,286,1,0,0,0,252,253,10,9,0,0,253,254,3,68,
  	34,0,254,255,3,22,11,9,255,285,1,0,0,0,256,257,10,7,0,0,257,258,3,62,
  	31,0,258,259,3,22,11,8,259,285,1,0,0,0,260,261,10,6,0,0,261,262,3,60,
  	30,0,262,263,3,22,11,7,263,285,1,0,0,0,264,265,10,5,0,0,265,266,3,58,
  	29,0,266,267,3,22,11,5,267,285,1,0,0,0,268,269,10,4,0,0,269,270,3,56,
  	28,0,270,271,3,22,11,5,271,285,1,0,0,0,272,273,10,3,0,0,273,274,3,54,
  	27,0,274,275,3,22,11,4,275,285,1,0,0,0,276,277,10,2,0,0,277,278,3,52,
  	26,0,278,279,3,22,11,3,279,285,1,0,0,0,280,281,10,1,0,0,281,282,3,64,
  	32,0,282,283,3,22,11,2,283,285,1,0,0,0,284,252,1,0,0,0,284,256,1,0,0,
  	0,284,260,1,0,0,0,284,264,1,0,0,0,284,268,1,0,0,0,284,272,1,0,0,0,284,
  	276,1,0,0,0,284,280,1,0,0,0,285,288,1,0,0,0,286,284,1,0,0,0,286,287,1,
  	0,0,0,287,23,1,0,0,0,288,286,1,0,0,0,289,293,3,28,14,0,290,292,3,34,17,
  	0,291,290,1,0,0,0,292,295,1,0,0,0,293,291,1,0,0,0,293,294,1,0,0,0,294,
  	25,1,0,0,0,295,293,1,0,0,0,296,298,3,28,14,0,297,299,3,34,17,0,298,297,
  	1,0,0,0,299,300,1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,27,1,0,0,
  	0,302,308,3,30,15,0,303,304,5,30,0,0,304,305,3,22,11,0,305,306,5,31,0,
  	0,306,308,1,0,0,0,307,302,1,0,0,0,307,303,1,0,0,0,308,29,1,0,0,0,309,
  	316,5,57,0,0,310,311,5,30,0,0,311,312,3,22,11,0,312,313,5,31,0,0,313,
  	314,3,32,16,0,314,316,1,0,0,0,315,309,1,0,0,0,315,310,1,0,0,0,316,320,
  	1,0,0,0,317,319,3,32,16,0,318,317,1,0,0,0,319,322,1,0,0,0,320,318,1,0,
  	0,0,320,321,1,0,0,0,321,31,1,0,0,0,322,320,1,0,0,0,323,325,3,34,17,0,
  	324,323,1,0,0,0,325,328,1,0,0,0,326,324,1,0,0,0,326,327,1,0,0,0,327,335,
  	1,0,0,0,328,326,1,0,0,0,329,330,5,32,0,0,330,331,3,22,11,0,331,332,5,
  	33,0,0,332,336,1,0,0,0,333,334,5,24,0,0,334,336,5,57,0,0,335,329,1,0,
  	0,0,335,333,1,0,0,0,336,33,1,0,0,0,337,338,5,25,0,0,338,340,5,57,0,0,
  	339,337,1,0,0,0,339,340,1,0,0,0,340,341,1,0,0,0,341,342,3,36,18,0,342,
  	35,1,0,0,0,343,345,5,30,0,0,344,346,3,20,10,0,345,344,1,0,0,0,345,346,
  	1,0,0,0,346,347,1,0,0,0,347,351,5,31,0,0,348,351,3,44,22,0,349,351,3,
  	72,36,0,350,343,1,0,0,0,350,348,1,0,0,0,350,349,1,0,0,0,351,37,1,0,0,
  	0,352,353,5,17,0,0,353,354,3,40,20,0,354,39,1,0,0,0,355,357,5,30,0,0,
  	356,358,3,42,21,0,357,356,1,0,0,0,357,358,1,0,0,0,358,359,1,0,0,0,359,
  	360,5,31,0,0,360,361,3,2,1,0,361,362,5,6,0,0,362,41,1,0,0,0,363,366,3,
  	18,9,0,364,365,5,15,0,0,365,367,5,29,0,0,366,364,1,0,0,0,366,367,1,0,
  	0,0,367,370,1,0,0,0,368,370,5,29,0,0,369,363,1,0,0,0,369,368,1,0,0,0,
  	370,43,1,0,0,0,371,373,5,34,0,0,372,374,3,46,23,0,373,372,1,0,0,0,373,
  	374,1,0,0,0,374,375,1,0,0,0,375,376,5,35,0,0,376,45,1,0,0,0,377,383,3,
  	48,24,0,378,379,3,50,25,0,379,380,3,48,24,0,380,382,1,0,0,0,381,378,1,
  	0,0,0,382,385,1,0,0,0,383,381,1,0,0,0,383,384,1,0,0,0,384,387,1,0,0,0,
  	385,383,1,0,0,0,386,388,3,50,25,0,387,386,1,0,0,0,387,388,1,0,0,0,388,
  	47,1,0,0,0,389,390,5,32,0,0,390,391,3,22,11,0,391,392,5,33,0,0,392,393,
  	5,2,0,0,393,394,3,22,11,0,394,400,1,0,0,0,395,396,5,57,0,0,396,397,5,
  	2,0,0,397,400,3,22,11,0,398,400,3,22,11,0,399,389,1,0,0,0,399,395,1,0,
  	0,0,399,398,1,0,0,0,400,49,1,0,0,0,401,402,7,0,0,0,402,51,1,0,0,0,403,
  	404,5,36,0,0,404,53,1,0,0,0,405,406,5,37,0,0,406,55,1,0,0,0,407,408,7,
  	1,0,0,408,57,1,0,0,0,409,410,5,42,0,0,410,59,1,0,0,0,411,412,7,2,0,0,
  	412,61,1,0,0,0,413,414,7,3,0,0,414,63,1,0,0,0,415,416,7,4,0,0,416,65,
  	1,0,0,0,417,418,7,5,0,0,418,67,1,0,0,0,419,420,5,56,0,0,420,69,1,0,0,
  	0,421,422,7,6,0,0,422,71,1,0,0,0,423,424,7,7,0,0,424,73,1,0,0,0,37,80,
  	84,122,127,139,165,167,176,182,186,191,193,204,209,216,224,232,250,284,
  	286,293,300,307,315,320,326,335,339,345,350,357,366,369,373,383,387,399
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  luaParserStaticData = staticData.release();
}

}

LuaParser::LuaParser(TokenStream *input) : LuaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LuaParser::LuaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LuaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *luaParserStaticData->atn, luaParserStaticData->decisionToDFA, luaParserStaticData->sharedContextCache, options);
}

LuaParser::~LuaParser() {
  delete _interpreter;
}

const atn::ATN& LuaParser::getATN() const {
  return *luaParserStaticData->atn;
}

std::string LuaParser::getGrammarFileName() const {
  return "Lua.g4";
}

const std::vector<std::string>& LuaParser::getRuleNames() const {
  return luaParserStaticData->ruleNames;
}

const dfa::Vocabulary& LuaParser::getVocabulary() const {
  return luaParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LuaParser::getSerializedATN() const {
  return luaParserStaticData->serializedATN;
}


//----------------- ChunkContext ------------------------------------------------------------------

LuaParser::ChunkContext::ChunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::BlockContext* LuaParser::ChunkContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

tree::TerminalNode* LuaParser::ChunkContext::EOF() {
  return getToken(LuaParser::EOF, 0);
}


size_t LuaParser::ChunkContext::getRuleIndex() const {
  return LuaParser::RuleChunk;
}

void LuaParser::ChunkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChunk(this);
}

void LuaParser::ChunkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChunk(this);
}

LuaParser::ChunkContext* LuaParser::chunk() {
  ChunkContext *_localctx = _tracker.createInstance<ChunkContext>(_ctx, getState());
  enterRule(_localctx, 0, LuaParser::RuleChunk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    block();
    setState(75);
    match(LuaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

LuaParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::StatContext *> LuaParser::BlockContext::stat() {
  return getRuleContexts<LuaParser::StatContext>();
}

LuaParser::StatContext* LuaParser::BlockContext::stat(size_t i) {
  return getRuleContext<LuaParser::StatContext>(i);
}

LuaParser::LaststatContext* LuaParser::BlockContext::laststat() {
  return getRuleContext<LuaParser::LaststatContext>(0);
}


size_t LuaParser::BlockContext::getRuleIndex() const {
  return LuaParser::RuleBlock;
}

void LuaParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void LuaParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

LuaParser::BlockContext* LuaParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, LuaParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(80);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(77);
        stat(); 
      }
      setState(82);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__2)
      | (1ULL << LuaParser::T__20)
      | (1ULL << LuaParser::T__21))) != 0)) {
      setState(83);
      laststat();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

LuaParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::StatContext::getRuleIndex() const {
  return LuaParser::RuleStat;
}

void LuaParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatEmptySemicolonContext ------------------------------------------------------------------

LuaParser::StatEmptySemicolonContext::StatEmptySemicolonContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatEmptySemicolonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatEmptySemicolon(this);
}
void LuaParser::StatEmptySemicolonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatEmptySemicolon(this);
}
//----------------- StatNumericForContext ------------------------------------------------------------------

tree::TerminalNode* LuaParser::StatNumericForContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

std::vector<LuaParser::ExpContext *> LuaParser::StatNumericForContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::StatNumericForContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::BlockContext* LuaParser::StatNumericForContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

LuaParser::StatNumericForContext::StatNumericForContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatNumericForContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatNumericFor(this);
}
void LuaParser::StatNumericForContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatNumericFor(this);
}
//----------------- StatLabelContext ------------------------------------------------------------------

LuaParser::LabelContext* LuaParser::StatLabelContext::label() {
  return getRuleContext<LuaParser::LabelContext>(0);
}

LuaParser::StatLabelContext::StatLabelContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatLabel(this);
}
void LuaParser::StatLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatLabel(this);
}
//----------------- StatFunctionCallContext ------------------------------------------------------------------

LuaParser::FunctioncallContext* LuaParser::StatFunctionCallContext::functioncall() {
  return getRuleContext<LuaParser::FunctioncallContext>(0);
}

LuaParser::StatFunctionCallContext::StatFunctionCallContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatFunctionCall(this);
}
void LuaParser::StatFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatFunctionCall(this);
}
//----------------- StatIfThenElseContext ------------------------------------------------------------------

std::vector<LuaParser::ExpContext *> LuaParser::StatIfThenElseContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::StatIfThenElseContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

std::vector<LuaParser::BlockContext *> LuaParser::StatIfThenElseContext::block() {
  return getRuleContexts<LuaParser::BlockContext>();
}

LuaParser::BlockContext* LuaParser::StatIfThenElseContext::block(size_t i) {
  return getRuleContext<LuaParser::BlockContext>(i);
}

LuaParser::StatIfThenElseContext::StatIfThenElseContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatIfThenElseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatIfThenElse(this);
}
void LuaParser::StatIfThenElseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatIfThenElse(this);
}
//----------------- StatLocalFunctionContext ------------------------------------------------------------------

tree::TerminalNode* LuaParser::StatLocalFunctionContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

LuaParser::FuncbodyContext* LuaParser::StatLocalFunctionContext::funcbody() {
  return getRuleContext<LuaParser::FuncbodyContext>(0);
}

LuaParser::StatLocalFunctionContext::StatLocalFunctionContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatLocalFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatLocalFunction(this);
}
void LuaParser::StatLocalFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatLocalFunction(this);
}
//----------------- StatGotoContext ------------------------------------------------------------------

tree::TerminalNode* LuaParser::StatGotoContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

LuaParser::StatGotoContext::StatGotoContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatGotoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatGoto(this);
}
void LuaParser::StatGotoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatGoto(this);
}
//----------------- StatRepeatContext ------------------------------------------------------------------

LuaParser::BlockContext* LuaParser::StatRepeatContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

LuaParser::ExpContext* LuaParser::StatRepeatContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

LuaParser::StatRepeatContext::StatRepeatContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatRepeatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatRepeat(this);
}
void LuaParser::StatRepeatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatRepeat(this);
}
//----------------- StatGenericForContext ------------------------------------------------------------------

LuaParser::NamelistContext* LuaParser::StatGenericForContext::namelist() {
  return getRuleContext<LuaParser::NamelistContext>(0);
}

LuaParser::ExplistContext* LuaParser::StatGenericForContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

LuaParser::BlockContext* LuaParser::StatGenericForContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

LuaParser::StatGenericForContext::StatGenericForContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatGenericForContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatGenericFor(this);
}
void LuaParser::StatGenericForContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatGenericFor(this);
}
//----------------- StatDoContext ------------------------------------------------------------------

LuaParser::BlockContext* LuaParser::StatDoContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

LuaParser::StatDoContext::StatDoContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatDoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatDo(this);
}
void LuaParser::StatDoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatDo(this);
}
//----------------- StatLocalAttributeNameListContext ------------------------------------------------------------------

LuaParser::AttnamelistContext* LuaParser::StatLocalAttributeNameListContext::attnamelist() {
  return getRuleContext<LuaParser::AttnamelistContext>(0);
}

LuaParser::ExplistContext* LuaParser::StatLocalAttributeNameListContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

LuaParser::StatLocalAttributeNameListContext::StatLocalAttributeNameListContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatLocalAttributeNameListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatLocalAttributeNameList(this);
}
void LuaParser::StatLocalAttributeNameListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatLocalAttributeNameList(this);
}
//----------------- StatAssignmentContext ------------------------------------------------------------------

LuaParser::VarlistContext* LuaParser::StatAssignmentContext::varlist() {
  return getRuleContext<LuaParser::VarlistContext>(0);
}

LuaParser::ExplistContext* LuaParser::StatAssignmentContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

LuaParser::StatAssignmentContext::StatAssignmentContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatAssignment(this);
}
void LuaParser::StatAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatAssignment(this);
}
//----------------- StatBreakContext ------------------------------------------------------------------

LuaParser::StatBreakContext::StatBreakContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatBreakContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatBreak(this);
}
void LuaParser::StatBreakContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatBreak(this);
}
//----------------- StatFunctionContext ------------------------------------------------------------------

LuaParser::FuncnameContext* LuaParser::StatFunctionContext::funcname() {
  return getRuleContext<LuaParser::FuncnameContext>(0);
}

LuaParser::FuncbodyContext* LuaParser::StatFunctionContext::funcbody() {
  return getRuleContext<LuaParser::FuncbodyContext>(0);
}

LuaParser::StatFunctionContext::StatFunctionContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatFunction(this);
}
void LuaParser::StatFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatFunction(this);
}
//----------------- StatWhileContext ------------------------------------------------------------------

LuaParser::ExpContext* LuaParser::StatWhileContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

LuaParser::BlockContext* LuaParser::StatWhileContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

LuaParser::StatWhileContext::StatWhileContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatWhileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatWhile(this);
}
void LuaParser::StatWhileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatWhile(this);
}
LuaParser::StatContext* LuaParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 4, LuaParser::RuleStat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LuaParser::StatEmptySemicolonContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(86);
      match(LuaParser::T__0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LuaParser::StatAssignmentContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(87);
      varlist();
      setState(88);
      match(LuaParser::T__1);
      setState(89);
      explist();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<LuaParser::StatFunctionCallContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(91);
      functioncall();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LuaParser::StatLabelContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(92);
      label();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LuaParser::StatBreakContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(93);
      match(LuaParser::T__2);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LuaParser::StatGotoContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(94);
      match(LuaParser::T__3);
      setState(95);
      match(LuaParser::NAME);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<LuaParser::StatDoContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(96);
      match(LuaParser::T__4);
      setState(97);
      block();
      setState(98);
      match(LuaParser::T__5);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<LuaParser::StatWhileContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(100);
      match(LuaParser::T__6);
      setState(101);
      exp(0);
      setState(102);
      match(LuaParser::T__4);
      setState(103);
      block();
      setState(104);
      match(LuaParser::T__5);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<LuaParser::StatRepeatContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(106);
      match(LuaParser::T__7);
      setState(107);
      block();
      setState(108);
      match(LuaParser::T__8);
      setState(109);
      exp(0);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<LuaParser::StatIfThenElseContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(111);
      match(LuaParser::T__9);
      setState(112);
      exp(0);
      setState(113);
      match(LuaParser::T__10);
      setState(114);
      block();
      setState(122);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LuaParser::T__11) {
        setState(115);
        match(LuaParser::T__11);
        setState(116);
        exp(0);
        setState(117);
        match(LuaParser::T__10);
        setState(118);
        block();
        setState(124);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(127);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuaParser::T__12) {
        setState(125);
        match(LuaParser::T__12);
        setState(126);
        block();
      }
      setState(129);
      match(LuaParser::T__5);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<LuaParser::StatNumericForContext>(_localctx);
      enterOuterAlt(_localctx, 11);
      setState(131);
      match(LuaParser::T__13);
      setState(132);
      match(LuaParser::NAME);
      setState(133);
      match(LuaParser::T__1);
      setState(134);
      exp(0);
      setState(135);
      match(LuaParser::T__14);
      setState(136);
      exp(0);
      setState(139);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuaParser::T__14) {
        setState(137);
        match(LuaParser::T__14);
        setState(138);
        exp(0);
      }
      setState(141);
      match(LuaParser::T__4);
      setState(142);
      block();
      setState(143);
      match(LuaParser::T__5);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<LuaParser::StatGenericForContext>(_localctx);
      enterOuterAlt(_localctx, 12);
      setState(145);
      match(LuaParser::T__13);
      setState(146);
      namelist();
      setState(147);
      match(LuaParser::T__15);
      setState(148);
      explist();
      setState(149);
      match(LuaParser::T__4);
      setState(150);
      block();
      setState(151);
      match(LuaParser::T__5);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<LuaParser::StatFunctionContext>(_localctx);
      enterOuterAlt(_localctx, 13);
      setState(153);
      match(LuaParser::T__16);
      setState(154);
      funcname();
      setState(155);
      funcbody();
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<LuaParser::StatLocalFunctionContext>(_localctx);
      enterOuterAlt(_localctx, 14);
      setState(157);
      match(LuaParser::T__17);
      setState(158);
      match(LuaParser::T__16);
      setState(159);
      match(LuaParser::NAME);
      setState(160);
      funcbody();
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<LuaParser::StatLocalAttributeNameListContext>(_localctx);
      enterOuterAlt(_localctx, 15);
      setState(161);
      match(LuaParser::T__17);
      setState(162);
      attnamelist();
      setState(165);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuaParser::T__1) {
        setState(163);
        match(LuaParser::T__1);
        setState(164);
        explist();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttnamelistContext ------------------------------------------------------------------

LuaParser::AttnamelistContext::AttnamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuaParser::AttnamelistContext::NAME() {
  return getTokens(LuaParser::NAME);
}

tree::TerminalNode* LuaParser::AttnamelistContext::NAME(size_t i) {
  return getToken(LuaParser::NAME, i);
}

std::vector<LuaParser::AttribContext *> LuaParser::AttnamelistContext::attrib() {
  return getRuleContexts<LuaParser::AttribContext>();
}

LuaParser::AttribContext* LuaParser::AttnamelistContext::attrib(size_t i) {
  return getRuleContext<LuaParser::AttribContext>(i);
}


size_t LuaParser::AttnamelistContext::getRuleIndex() const {
  return LuaParser::RuleAttnamelist;
}

void LuaParser::AttnamelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttnamelist(this);
}

void LuaParser::AttnamelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttnamelist(this);
}

LuaParser::AttnamelistContext* LuaParser::attnamelist() {
  AttnamelistContext *_localctx = _tracker.createInstance<AttnamelistContext>(_ctx, getState());
  enterRule(_localctx, 6, LuaParser::RuleAttnamelist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(LuaParser::NAME);
    setState(170);
    attrib();
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__14) {
      setState(171);
      match(LuaParser::T__14);
      setState(172);
      match(LuaParser::NAME);
      setState(173);
      attrib();
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttribContext ------------------------------------------------------------------

LuaParser::AttribContext::AttribContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::AttribContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::AttribContext::getRuleIndex() const {
  return LuaParser::RuleAttrib;
}

void LuaParser::AttribContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttrib(this);
}

void LuaParser::AttribContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttrib(this);
}

LuaParser::AttribContext* LuaParser::attrib() {
  AttribContext *_localctx = _tracker.createInstance<AttribContext>(_ctx, getState());
  enterRule(_localctx, 8, LuaParser::RuleAttrib);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__18) {
      setState(179);
      match(LuaParser::T__18);
      setState(180);
      match(LuaParser::NAME);
      setState(181);
      match(LuaParser::T__19);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LaststatContext ------------------------------------------------------------------

LuaParser::LaststatContext::LaststatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::ExplistContext* LuaParser::LaststatContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}


size_t LuaParser::LaststatContext::getRuleIndex() const {
  return LuaParser::RuleLaststat;
}

void LuaParser::LaststatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLaststat(this);
}

void LuaParser::LaststatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLaststat(this);
}

LuaParser::LaststatContext* LuaParser::laststat() {
  LaststatContext *_localctx = _tracker.createInstance<LaststatContext>(_ctx, getState());
  enterRule(_localctx, 10, LuaParser::RuleLaststat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(193);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(184);
        match(LuaParser::T__20);
        setState(186);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 17) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 17)) & ((1ULL << (LuaParser::T__16 - 17))
          | (1ULL << (LuaParser::T__25 - 17))
          | (1ULL << (LuaParser::T__26 - 17))
          | (1ULL << (LuaParser::T__27 - 17))
          | (1ULL << (LuaParser::T__28 - 17))
          | (1ULL << (LuaParser::T__29 - 17))
          | (1ULL << (LuaParser::T__33 - 17))
          | (1ULL << (LuaParser::T__43 - 17))
          | (1ULL << (LuaParser::T__50 - 17))
          | (1ULL << (LuaParser::T__53 - 17))
          | (1ULL << (LuaParser::T__54 - 17))
          | (1ULL << (LuaParser::NAME - 17))
          | (1ULL << (LuaParser::NORMALSTRING - 17))
          | (1ULL << (LuaParser::CHARSTRING - 17))
          | (1ULL << (LuaParser::LONGSTRING - 17))
          | (1ULL << (LuaParser::INT - 17))
          | (1ULL << (LuaParser::HEX - 17))
          | (1ULL << (LuaParser::FLOAT - 17))
          | (1ULL << (LuaParser::HEX_FLOAT - 17)))) != 0)) {
          setState(185);
          explist();
        }
        break;
      }

      case LuaParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(188);
        match(LuaParser::T__2);
        break;
      }

      case LuaParser::T__21: {
        enterOuterAlt(_localctx, 3);
        setState(189);
        match(LuaParser::T__21);
        setState(191);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LuaParser::T__0) {
          setState(190);
          match(LuaParser::T__0);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

LuaParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::LabelContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::LabelContext::getRuleIndex() const {
  return LuaParser::RuleLabel;
}

void LuaParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void LuaParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}

LuaParser::LabelContext* LuaParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 12, LuaParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(LuaParser::T__22);
    setState(196);
    match(LuaParser::NAME);
    setState(197);
    match(LuaParser::T__22);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncnameContext ------------------------------------------------------------------

LuaParser::FuncnameContext::FuncnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuaParser::FuncnameContext::NAME() {
  return getTokens(LuaParser::NAME);
}

tree::TerminalNode* LuaParser::FuncnameContext::NAME(size_t i) {
  return getToken(LuaParser::NAME, i);
}


size_t LuaParser::FuncnameContext::getRuleIndex() const {
  return LuaParser::RuleFuncname;
}

void LuaParser::FuncnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncname(this);
}

void LuaParser::FuncnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncname(this);
}

LuaParser::FuncnameContext* LuaParser::funcname() {
  FuncnameContext *_localctx = _tracker.createInstance<FuncnameContext>(_ctx, getState());
  enterRule(_localctx, 14, LuaParser::RuleFuncname);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(LuaParser::NAME);
    setState(204);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__23) {
      setState(200);
      match(LuaParser::T__23);
      setState(201);
      match(LuaParser::NAME);
      setState(206);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(209);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__24) {
      setState(207);
      match(LuaParser::T__24);
      setState(208);
      match(LuaParser::NAME);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarlistContext ------------------------------------------------------------------

LuaParser::VarlistContext::VarlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::VarContext *> LuaParser::VarlistContext::var() {
  return getRuleContexts<LuaParser::VarContext>();
}

LuaParser::VarContext* LuaParser::VarlistContext::var(size_t i) {
  return getRuleContext<LuaParser::VarContext>(i);
}


size_t LuaParser::VarlistContext::getRuleIndex() const {
  return LuaParser::RuleVarlist;
}

void LuaParser::VarlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarlist(this);
}

void LuaParser::VarlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarlist(this);
}

LuaParser::VarlistContext* LuaParser::varlist() {
  VarlistContext *_localctx = _tracker.createInstance<VarlistContext>(_ctx, getState());
  enterRule(_localctx, 16, LuaParser::RuleVarlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    var();
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__14) {
      setState(212);
      match(LuaParser::T__14);
      setState(213);
      var();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamelistContext ------------------------------------------------------------------

LuaParser::NamelistContext::NamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuaParser::NamelistContext::NAME() {
  return getTokens(LuaParser::NAME);
}

tree::TerminalNode* LuaParser::NamelistContext::NAME(size_t i) {
  return getToken(LuaParser::NAME, i);
}


size_t LuaParser::NamelistContext::getRuleIndex() const {
  return LuaParser::RuleNamelist;
}

void LuaParser::NamelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamelist(this);
}

void LuaParser::NamelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamelist(this);
}

LuaParser::NamelistContext* LuaParser::namelist() {
  NamelistContext *_localctx = _tracker.createInstance<NamelistContext>(_ctx, getState());
  enterRule(_localctx, 18, LuaParser::RuleNamelist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(LuaParser::NAME);
    setState(224);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(220);
        match(LuaParser::T__14);
        setState(221);
        match(LuaParser::NAME); 
      }
      setState(226);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplistContext ------------------------------------------------------------------

LuaParser::ExplistContext::ExplistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::ExpContext *> LuaParser::ExplistContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExplistContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}


size_t LuaParser::ExplistContext::getRuleIndex() const {
  return LuaParser::RuleExplist;
}

void LuaParser::ExplistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplist(this);
}

void LuaParser::ExplistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplist(this);
}

LuaParser::ExplistContext* LuaParser::explist() {
  ExplistContext *_localctx = _tracker.createInstance<ExplistContext>(_ctx, getState());
  enterRule(_localctx, 20, LuaParser::RuleExplist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(232);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(227);
        exp(0);
        setState(228);
        match(LuaParser::T__14); 
      }
      setState(234);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
    setState(235);
    exp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

LuaParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::ExpContext::getRuleIndex() const {
  return LuaParser::RuleExp;
}

void LuaParser::ExpContext::copyFrom(ExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpOperatorBitwiseContext ------------------------------------------------------------------

std::vector<LuaParser::ExpContext *> LuaParser::ExpOperatorBitwiseContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpOperatorBitwiseContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorBitwiseContext* LuaParser::ExpOperatorBitwiseContext::operatorBitwise() {
  return getRuleContext<LuaParser::OperatorBitwiseContext>(0);
}

LuaParser::ExpOperatorBitwiseContext::ExpOperatorBitwiseContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpOperatorBitwiseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpOperatorBitwise(this);
}
void LuaParser::ExpOperatorBitwiseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpOperatorBitwise(this);
}
//----------------- ExpFalseContext ------------------------------------------------------------------

LuaParser::ExpFalseContext::ExpFalseContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpFalseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpFalse(this);
}
void LuaParser::ExpFalseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpFalse(this);
}
//----------------- ExpVarargContext ------------------------------------------------------------------

LuaParser::ExpVarargContext::ExpVarargContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpVarargContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpVararg(this);
}
void LuaParser::ExpVarargContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpVararg(this);
}
//----------------- ExpTableConstructorContext ------------------------------------------------------------------

LuaParser::TableconstructorContext* LuaParser::ExpTableConstructorContext::tableconstructor() {
  return getRuleContext<LuaParser::TableconstructorContext>(0);
}

LuaParser::ExpTableConstructorContext::ExpTableConstructorContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpTableConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpTableConstructor(this);
}
void LuaParser::ExpTableConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpTableConstructor(this);
}
//----------------- ExpPrefixExpContext ------------------------------------------------------------------

LuaParser::PrefixexpContext* LuaParser::ExpPrefixExpContext::prefixexp() {
  return getRuleContext<LuaParser::PrefixexpContext>(0);
}

LuaParser::ExpPrefixExpContext::ExpPrefixExpContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpPrefixExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpPrefixExp(this);
}
void LuaParser::ExpPrefixExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpPrefixExp(this);
}
//----------------- ExpTrueContext ------------------------------------------------------------------

LuaParser::ExpTrueContext::ExpTrueContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpTrueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpTrue(this);
}
void LuaParser::ExpTrueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpTrue(this);
}
//----------------- ExpNumberContext ------------------------------------------------------------------

LuaParser::NumberContext* LuaParser::ExpNumberContext::number() {
  return getRuleContext<LuaParser::NumberContext>(0);
}

LuaParser::ExpNumberContext::ExpNumberContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpNumber(this);
}
void LuaParser::ExpNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpNumber(this);
}
//----------------- ExpOperatorUnaryContext ------------------------------------------------------------------

LuaParser::OperatorUnaryContext* LuaParser::ExpOperatorUnaryContext::operatorUnary() {
  return getRuleContext<LuaParser::OperatorUnaryContext>(0);
}

LuaParser::ExpContext* LuaParser::ExpOperatorUnaryContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

LuaParser::ExpOperatorUnaryContext::ExpOperatorUnaryContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpOperatorUnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpOperatorUnary(this);
}
void LuaParser::ExpOperatorUnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpOperatorUnary(this);
}
//----------------- ExpOperatorAndContext ------------------------------------------------------------------

std::vector<LuaParser::ExpContext *> LuaParser::ExpOperatorAndContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpOperatorAndContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorAndContext* LuaParser::ExpOperatorAndContext::operatorAnd() {
  return getRuleContext<LuaParser::OperatorAndContext>(0);
}

LuaParser::ExpOperatorAndContext::ExpOperatorAndContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpOperatorAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpOperatorAnd(this);
}
void LuaParser::ExpOperatorAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpOperatorAnd(this);
}
//----------------- ExpOperatorPowerContext ------------------------------------------------------------------

std::vector<LuaParser::ExpContext *> LuaParser::ExpOperatorPowerContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpOperatorPowerContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorPowerContext* LuaParser::ExpOperatorPowerContext::operatorPower() {
  return getRuleContext<LuaParser::OperatorPowerContext>(0);
}

LuaParser::ExpOperatorPowerContext::ExpOperatorPowerContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpOperatorPowerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpOperatorPower(this);
}
void LuaParser::ExpOperatorPowerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpOperatorPower(this);
}
//----------------- ExpOperatorAddSubContext ------------------------------------------------------------------

std::vector<LuaParser::ExpContext *> LuaParser::ExpOperatorAddSubContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpOperatorAddSubContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorAddSubContext* LuaParser::ExpOperatorAddSubContext::operatorAddSub() {
  return getRuleContext<LuaParser::OperatorAddSubContext>(0);
}

LuaParser::ExpOperatorAddSubContext::ExpOperatorAddSubContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpOperatorAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpOperatorAddSub(this);
}
void LuaParser::ExpOperatorAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpOperatorAddSub(this);
}
//----------------- ExpOperatorStrcatContext ------------------------------------------------------------------

std::vector<LuaParser::ExpContext *> LuaParser::ExpOperatorStrcatContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpOperatorStrcatContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorStrcatContext* LuaParser::ExpOperatorStrcatContext::operatorStrcat() {
  return getRuleContext<LuaParser::OperatorStrcatContext>(0);
}

LuaParser::ExpOperatorStrcatContext::ExpOperatorStrcatContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpOperatorStrcatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpOperatorStrcat(this);
}
void LuaParser::ExpOperatorStrcatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpOperatorStrcat(this);
}
//----------------- ExpOperatorComparisonContext ------------------------------------------------------------------

std::vector<LuaParser::ExpContext *> LuaParser::ExpOperatorComparisonContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpOperatorComparisonContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorComparisonContext* LuaParser::ExpOperatorComparisonContext::operatorComparison() {
  return getRuleContext<LuaParser::OperatorComparisonContext>(0);
}

LuaParser::ExpOperatorComparisonContext::ExpOperatorComparisonContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpOperatorComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpOperatorComparison(this);
}
void LuaParser::ExpOperatorComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpOperatorComparison(this);
}
//----------------- ExpNilContext ------------------------------------------------------------------

LuaParser::ExpNilContext::ExpNilContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpNilContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpNil(this);
}
void LuaParser::ExpNilContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpNil(this);
}
//----------------- ExpOperatorOrContext ------------------------------------------------------------------

std::vector<LuaParser::ExpContext *> LuaParser::ExpOperatorOrContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpOperatorOrContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorOrContext* LuaParser::ExpOperatorOrContext::operatorOr() {
  return getRuleContext<LuaParser::OperatorOrContext>(0);
}

LuaParser::ExpOperatorOrContext::ExpOperatorOrContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpOperatorOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpOperatorOr(this);
}
void LuaParser::ExpOperatorOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpOperatorOr(this);
}
//----------------- ExpStringContext ------------------------------------------------------------------

LuaParser::StringContext* LuaParser::ExpStringContext::string() {
  return getRuleContext<LuaParser::StringContext>(0);
}

LuaParser::ExpStringContext::ExpStringContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpString(this);
}
void LuaParser::ExpStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpString(this);
}
//----------------- ExpOperatorMulDivModContext ------------------------------------------------------------------

std::vector<LuaParser::ExpContext *> LuaParser::ExpOperatorMulDivModContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpOperatorMulDivModContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorMulDivModContext* LuaParser::ExpOperatorMulDivModContext::operatorMulDivMod() {
  return getRuleContext<LuaParser::OperatorMulDivModContext>(0);
}

LuaParser::ExpOperatorMulDivModContext::ExpOperatorMulDivModContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpOperatorMulDivModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpOperatorMulDivMod(this);
}
void LuaParser::ExpOperatorMulDivModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpOperatorMulDivMod(this);
}
//----------------- ExpFunctionDefContext ------------------------------------------------------------------

LuaParser::FunctiondefContext* LuaParser::ExpFunctionDefContext::functiondef() {
  return getRuleContext<LuaParser::FunctiondefContext>(0);
}

LuaParser::ExpFunctionDefContext::ExpFunctionDefContext(ExpContext *ctx) { copyFrom(ctx); }

void LuaParser::ExpFunctionDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpFunctionDef(this);
}
void LuaParser::ExpFunctionDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpFunctionDef(this);
}

LuaParser::ExpContext* LuaParser::exp() {
   return exp(0);
}

LuaParser::ExpContext* LuaParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LuaParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  LuaParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, LuaParser::RuleExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(250);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__25: {
        _localctx = _tracker.createInstance<ExpNilContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(238);
        match(LuaParser::T__25);
        break;
      }

      case LuaParser::T__26: {
        _localctx = _tracker.createInstance<ExpFalseContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(239);
        match(LuaParser::T__26);
        break;
      }

      case LuaParser::T__27: {
        _localctx = _tracker.createInstance<ExpTrueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(240);
        match(LuaParser::T__27);
        break;
      }

      case LuaParser::INT:
      case LuaParser::HEX:
      case LuaParser::FLOAT:
      case LuaParser::HEX_FLOAT: {
        _localctx = _tracker.createInstance<ExpNumberContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(241);
        number();
        break;
      }

      case LuaParser::NORMALSTRING:
      case LuaParser::CHARSTRING:
      case LuaParser::LONGSTRING: {
        _localctx = _tracker.createInstance<ExpStringContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(242);
        string();
        break;
      }

      case LuaParser::T__28: {
        _localctx = _tracker.createInstance<ExpVarargContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(243);
        match(LuaParser::T__28);
        break;
      }

      case LuaParser::T__16: {
        _localctx = _tracker.createInstance<ExpFunctionDefContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(244);
        functiondef();
        break;
      }

      case LuaParser::T__29:
      case LuaParser::NAME: {
        _localctx = _tracker.createInstance<ExpPrefixExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(245);
        prefixexp();
        break;
      }

      case LuaParser::T__33: {
        _localctx = _tracker.createInstance<ExpTableConstructorContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(246);
        tableconstructor();
        break;
      }

      case LuaParser::T__43:
      case LuaParser::T__50:
      case LuaParser::T__53:
      case LuaParser::T__54: {
        _localctx = _tracker.createInstance<ExpOperatorUnaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(247);
        operatorUnary();
        setState(248);
        exp(8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(286);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(284);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpOperatorPowerContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(252);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(253);
          operatorPower();
          setState(254);
          exp(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExpOperatorMulDivModContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(256);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(257);
          operatorMulDivMod();
          setState(258);
          exp(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExpOperatorAddSubContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(260);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(261);
          operatorAddSub();
          setState(262);
          exp(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ExpOperatorStrcatContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(264);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(265);
          operatorStrcat();
          setState(266);
          exp(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ExpOperatorComparisonContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(268);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(269);
          operatorComparison();
          setState(270);
          exp(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ExpOperatorAndContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(272);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(273);
          operatorAnd();
          setState(274);
          exp(4);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<ExpOperatorOrContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(276);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(277);
          operatorOr();
          setState(278);
          exp(3);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ExpOperatorBitwiseContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(280);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(281);
          operatorBitwise();
          setState(282);
          exp(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(288);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrefixexpContext ------------------------------------------------------------------

LuaParser::PrefixexpContext::PrefixexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::VarOrExpContext* LuaParser::PrefixexpContext::varOrExp() {
  return getRuleContext<LuaParser::VarOrExpContext>(0);
}

std::vector<LuaParser::NameAndArgsContext *> LuaParser::PrefixexpContext::nameAndArgs() {
  return getRuleContexts<LuaParser::NameAndArgsContext>();
}

LuaParser::NameAndArgsContext* LuaParser::PrefixexpContext::nameAndArgs(size_t i) {
  return getRuleContext<LuaParser::NameAndArgsContext>(i);
}


size_t LuaParser::PrefixexpContext::getRuleIndex() const {
  return LuaParser::RulePrefixexp;
}

void LuaParser::PrefixexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixexp(this);
}

void LuaParser::PrefixexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixexp(this);
}

LuaParser::PrefixexpContext* LuaParser::prefixexp() {
  PrefixexpContext *_localctx = _tracker.createInstance<PrefixexpContext>(_ctx, getState());
  enterRule(_localctx, 24, LuaParser::RulePrefixexp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(289);
    varOrExp();
    setState(293);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(290);
        nameAndArgs(); 
      }
      setState(295);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctioncallContext ------------------------------------------------------------------

LuaParser::FunctioncallContext::FunctioncallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::VarOrExpContext* LuaParser::FunctioncallContext::varOrExp() {
  return getRuleContext<LuaParser::VarOrExpContext>(0);
}

std::vector<LuaParser::NameAndArgsContext *> LuaParser::FunctioncallContext::nameAndArgs() {
  return getRuleContexts<LuaParser::NameAndArgsContext>();
}

LuaParser::NameAndArgsContext* LuaParser::FunctioncallContext::nameAndArgs(size_t i) {
  return getRuleContext<LuaParser::NameAndArgsContext>(i);
}


size_t LuaParser::FunctioncallContext::getRuleIndex() const {
  return LuaParser::RuleFunctioncall;
}

void LuaParser::FunctioncallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctioncall(this);
}

void LuaParser::FunctioncallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctioncall(this);
}

LuaParser::FunctioncallContext* LuaParser::functioncall() {
  FunctioncallContext *_localctx = _tracker.createInstance<FunctioncallContext>(_ctx, getState());
  enterRule(_localctx, 26, LuaParser::RuleFunctioncall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(296);
    varOrExp();
    setState(298); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(297);
              nameAndArgs();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(300); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarOrExpContext ------------------------------------------------------------------

LuaParser::VarOrExpContext::VarOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::VarContext* LuaParser::VarOrExpContext::var() {
  return getRuleContext<LuaParser::VarContext>(0);
}

LuaParser::ExpContext* LuaParser::VarOrExpContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}


size_t LuaParser::VarOrExpContext::getRuleIndex() const {
  return LuaParser::RuleVarOrExp;
}

void LuaParser::VarOrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarOrExp(this);
}

void LuaParser::VarOrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarOrExp(this);
}

LuaParser::VarOrExpContext* LuaParser::varOrExp() {
  VarOrExpContext *_localctx = _tracker.createInstance<VarOrExpContext>(_ctx, getState());
  enterRule(_localctx, 28, LuaParser::RuleVarOrExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(307);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(302);
      var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(303);
      match(LuaParser::T__29);
      setState(304);
      exp(0);
      setState(305);
      match(LuaParser::T__30);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

LuaParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::VarContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

LuaParser::ExpContext* LuaParser::VarContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

std::vector<LuaParser::VarSuffixContext *> LuaParser::VarContext::varSuffix() {
  return getRuleContexts<LuaParser::VarSuffixContext>();
}

LuaParser::VarSuffixContext* LuaParser::VarContext::varSuffix(size_t i) {
  return getRuleContext<LuaParser::VarSuffixContext>(i);
}


size_t LuaParser::VarContext::getRuleIndex() const {
  return LuaParser::RuleVar;
}

void LuaParser::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void LuaParser::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}

LuaParser::VarContext* LuaParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 30, LuaParser::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(315);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::NAME: {
        setState(309);
        match(LuaParser::NAME);
        break;
      }

      case LuaParser::T__29: {
        setState(310);
        match(LuaParser::T__29);
        setState(311);
        exp(0);
        setState(312);
        match(LuaParser::T__30);
        setState(313);
        varSuffix();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(320);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(317);
        varSuffix(); 
      }
      setState(322);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarSuffixContext ------------------------------------------------------------------

LuaParser::VarSuffixContext::VarSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::ExpContext* LuaParser::VarSuffixContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

tree::TerminalNode* LuaParser::VarSuffixContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

std::vector<LuaParser::NameAndArgsContext *> LuaParser::VarSuffixContext::nameAndArgs() {
  return getRuleContexts<LuaParser::NameAndArgsContext>();
}

LuaParser::NameAndArgsContext* LuaParser::VarSuffixContext::nameAndArgs(size_t i) {
  return getRuleContext<LuaParser::NameAndArgsContext>(i);
}


size_t LuaParser::VarSuffixContext::getRuleIndex() const {
  return LuaParser::RuleVarSuffix;
}

void LuaParser::VarSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarSuffix(this);
}

void LuaParser::VarSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarSuffix(this);
}

LuaParser::VarSuffixContext* LuaParser::varSuffix() {
  VarSuffixContext *_localctx = _tracker.createInstance<VarSuffixContext>(_ctx, getState());
  enterRule(_localctx, 32, LuaParser::RuleVarSuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__24)
      | (1ULL << LuaParser::T__29)
      | (1ULL << LuaParser::T__33)
      | (1ULL << LuaParser::NORMALSTRING)
      | (1ULL << LuaParser::CHARSTRING)
      | (1ULL << LuaParser::LONGSTRING))) != 0)) {
      setState(323);
      nameAndArgs();
      setState(328);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(335);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__31: {
        setState(329);
        match(LuaParser::T__31);
        setState(330);
        exp(0);
        setState(331);
        match(LuaParser::T__32);
        break;
      }

      case LuaParser::T__23: {
        setState(333);
        match(LuaParser::T__23);
        setState(334);
        match(LuaParser::NAME);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameAndArgsContext ------------------------------------------------------------------

LuaParser::NameAndArgsContext::NameAndArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::ArgsContext* LuaParser::NameAndArgsContext::args() {
  return getRuleContext<LuaParser::ArgsContext>(0);
}

tree::TerminalNode* LuaParser::NameAndArgsContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::NameAndArgsContext::getRuleIndex() const {
  return LuaParser::RuleNameAndArgs;
}

void LuaParser::NameAndArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNameAndArgs(this);
}

void LuaParser::NameAndArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNameAndArgs(this);
}

LuaParser::NameAndArgsContext* LuaParser::nameAndArgs() {
  NameAndArgsContext *_localctx = _tracker.createInstance<NameAndArgsContext>(_ctx, getState());
  enterRule(_localctx, 34, LuaParser::RuleNameAndArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__24) {
      setState(337);
      match(LuaParser::T__24);
      setState(338);
      match(LuaParser::NAME);
    }
    setState(341);
    args();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

LuaParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::ExplistContext* LuaParser::ArgsContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

LuaParser::TableconstructorContext* LuaParser::ArgsContext::tableconstructor() {
  return getRuleContext<LuaParser::TableconstructorContext>(0);
}

LuaParser::StringContext* LuaParser::ArgsContext::string() {
  return getRuleContext<LuaParser::StringContext>(0);
}


size_t LuaParser::ArgsContext::getRuleIndex() const {
  return LuaParser::RuleArgs;
}

void LuaParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void LuaParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}

LuaParser::ArgsContext* LuaParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 36, LuaParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(350);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__29: {
        enterOuterAlt(_localctx, 1);
        setState(343);
        match(LuaParser::T__29);
        setState(345);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 17) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 17)) & ((1ULL << (LuaParser::T__16 - 17))
          | (1ULL << (LuaParser::T__25 - 17))
          | (1ULL << (LuaParser::T__26 - 17))
          | (1ULL << (LuaParser::T__27 - 17))
          | (1ULL << (LuaParser::T__28 - 17))
          | (1ULL << (LuaParser::T__29 - 17))
          | (1ULL << (LuaParser::T__33 - 17))
          | (1ULL << (LuaParser::T__43 - 17))
          | (1ULL << (LuaParser::T__50 - 17))
          | (1ULL << (LuaParser::T__53 - 17))
          | (1ULL << (LuaParser::T__54 - 17))
          | (1ULL << (LuaParser::NAME - 17))
          | (1ULL << (LuaParser::NORMALSTRING - 17))
          | (1ULL << (LuaParser::CHARSTRING - 17))
          | (1ULL << (LuaParser::LONGSTRING - 17))
          | (1ULL << (LuaParser::INT - 17))
          | (1ULL << (LuaParser::HEX - 17))
          | (1ULL << (LuaParser::FLOAT - 17))
          | (1ULL << (LuaParser::HEX_FLOAT - 17)))) != 0)) {
          setState(344);
          explist();
        }
        setState(347);
        match(LuaParser::T__30);
        break;
      }

      case LuaParser::T__33: {
        enterOuterAlt(_localctx, 2);
        setState(348);
        tableconstructor();
        break;
      }

      case LuaParser::NORMALSTRING:
      case LuaParser::CHARSTRING:
      case LuaParser::LONGSTRING: {
        enterOuterAlt(_localctx, 3);
        setState(349);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefContext ------------------------------------------------------------------

LuaParser::FunctiondefContext::FunctiondefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::FuncbodyContext* LuaParser::FunctiondefContext::funcbody() {
  return getRuleContext<LuaParser::FuncbodyContext>(0);
}


size_t LuaParser::FunctiondefContext::getRuleIndex() const {
  return LuaParser::RuleFunctiondef;
}

void LuaParser::FunctiondefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiondef(this);
}

void LuaParser::FunctiondefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiondef(this);
}

LuaParser::FunctiondefContext* LuaParser::functiondef() {
  FunctiondefContext *_localctx = _tracker.createInstance<FunctiondefContext>(_ctx, getState());
  enterRule(_localctx, 38, LuaParser::RuleFunctiondef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    match(LuaParser::T__16);
    setState(353);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncbodyContext ------------------------------------------------------------------

LuaParser::FuncbodyContext::FuncbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::BlockContext* LuaParser::FuncbodyContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

LuaParser::ParlistContext* LuaParser::FuncbodyContext::parlist() {
  return getRuleContext<LuaParser::ParlistContext>(0);
}


size_t LuaParser::FuncbodyContext::getRuleIndex() const {
  return LuaParser::RuleFuncbody;
}

void LuaParser::FuncbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncbody(this);
}

void LuaParser::FuncbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncbody(this);
}

LuaParser::FuncbodyContext* LuaParser::funcbody() {
  FuncbodyContext *_localctx = _tracker.createInstance<FuncbodyContext>(_ctx, getState());
  enterRule(_localctx, 40, LuaParser::RuleFuncbody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(355);
    match(LuaParser::T__29);
    setState(357);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__28

    || _la == LuaParser::NAME) {
      setState(356);
      parlist();
    }
    setState(359);
    match(LuaParser::T__30);
    setState(360);
    block();
    setState(361);
    match(LuaParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParlistContext ------------------------------------------------------------------

LuaParser::ParlistContext::ParlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::NamelistContext* LuaParser::ParlistContext::namelist() {
  return getRuleContext<LuaParser::NamelistContext>(0);
}


size_t LuaParser::ParlistContext::getRuleIndex() const {
  return LuaParser::RuleParlist;
}

void LuaParser::ParlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParlist(this);
}

void LuaParser::ParlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParlist(this);
}

LuaParser::ParlistContext* LuaParser::parlist() {
  ParlistContext *_localctx = _tracker.createInstance<ParlistContext>(_ctx, getState());
  enterRule(_localctx, 42, LuaParser::RuleParlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(369);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(363);
        namelist();
        setState(366);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LuaParser::T__14) {
          setState(364);
          match(LuaParser::T__14);
          setState(365);
          match(LuaParser::T__28);
        }
        break;
      }

      case LuaParser::T__28: {
        enterOuterAlt(_localctx, 2);
        setState(368);
        match(LuaParser::T__28);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableconstructorContext ------------------------------------------------------------------

LuaParser::TableconstructorContext::TableconstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::FieldlistContext* LuaParser::TableconstructorContext::fieldlist() {
  return getRuleContext<LuaParser::FieldlistContext>(0);
}


size_t LuaParser::TableconstructorContext::getRuleIndex() const {
  return LuaParser::RuleTableconstructor;
}

void LuaParser::TableconstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableconstructor(this);
}

void LuaParser::TableconstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableconstructor(this);
}

LuaParser::TableconstructorContext* LuaParser::tableconstructor() {
  TableconstructorContext *_localctx = _tracker.createInstance<TableconstructorContext>(_ctx, getState());
  enterRule(_localctx, 44, LuaParser::RuleTableconstructor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(LuaParser::T__33);
    setState(373);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 17) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 17)) & ((1ULL << (LuaParser::T__16 - 17))
      | (1ULL << (LuaParser::T__25 - 17))
      | (1ULL << (LuaParser::T__26 - 17))
      | (1ULL << (LuaParser::T__27 - 17))
      | (1ULL << (LuaParser::T__28 - 17))
      | (1ULL << (LuaParser::T__29 - 17))
      | (1ULL << (LuaParser::T__31 - 17))
      | (1ULL << (LuaParser::T__33 - 17))
      | (1ULL << (LuaParser::T__43 - 17))
      | (1ULL << (LuaParser::T__50 - 17))
      | (1ULL << (LuaParser::T__53 - 17))
      | (1ULL << (LuaParser::T__54 - 17))
      | (1ULL << (LuaParser::NAME - 17))
      | (1ULL << (LuaParser::NORMALSTRING - 17))
      | (1ULL << (LuaParser::CHARSTRING - 17))
      | (1ULL << (LuaParser::LONGSTRING - 17))
      | (1ULL << (LuaParser::INT - 17))
      | (1ULL << (LuaParser::HEX - 17))
      | (1ULL << (LuaParser::FLOAT - 17))
      | (1ULL << (LuaParser::HEX_FLOAT - 17)))) != 0)) {
      setState(372);
      fieldlist();
    }
    setState(375);
    match(LuaParser::T__34);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldlistContext ------------------------------------------------------------------

LuaParser::FieldlistContext::FieldlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::FieldContext *> LuaParser::FieldlistContext::field() {
  return getRuleContexts<LuaParser::FieldContext>();
}

LuaParser::FieldContext* LuaParser::FieldlistContext::field(size_t i) {
  return getRuleContext<LuaParser::FieldContext>(i);
}

std::vector<LuaParser::FieldsepContext *> LuaParser::FieldlistContext::fieldsep() {
  return getRuleContexts<LuaParser::FieldsepContext>();
}

LuaParser::FieldsepContext* LuaParser::FieldlistContext::fieldsep(size_t i) {
  return getRuleContext<LuaParser::FieldsepContext>(i);
}


size_t LuaParser::FieldlistContext::getRuleIndex() const {
  return LuaParser::RuleFieldlist;
}

void LuaParser::FieldlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldlist(this);
}

void LuaParser::FieldlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldlist(this);
}

LuaParser::FieldlistContext* LuaParser::fieldlist() {
  FieldlistContext *_localctx = _tracker.createInstance<FieldlistContext>(_ctx, getState());
  enterRule(_localctx, 46, LuaParser::RuleFieldlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(377);
    field();
    setState(383);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(378);
        fieldsep();
        setState(379);
        field(); 
      }
      setState(385);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
    setState(387);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__0

    || _la == LuaParser::T__14) {
      setState(386);
      fieldsep();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

LuaParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::ExpContext *> LuaParser::FieldContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::FieldContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

tree::TerminalNode* LuaParser::FieldContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::FieldContext::getRuleIndex() const {
  return LuaParser::RuleField;
}

void LuaParser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void LuaParser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}

LuaParser::FieldContext* LuaParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 48, LuaParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(399);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(389);
      match(LuaParser::T__31);
      setState(390);
      exp(0);
      setState(391);
      match(LuaParser::T__32);
      setState(392);
      match(LuaParser::T__1);
      setState(393);
      exp(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(395);
      match(LuaParser::NAME);
      setState(396);
      match(LuaParser::T__1);
      setState(397);
      exp(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(398);
      exp(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldsepContext ------------------------------------------------------------------

LuaParser::FieldsepContext::FieldsepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::FieldsepContext::getRuleIndex() const {
  return LuaParser::RuleFieldsep;
}

void LuaParser::FieldsepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldsep(this);
}

void LuaParser::FieldsepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldsep(this);
}

LuaParser::FieldsepContext* LuaParser::fieldsep() {
  FieldsepContext *_localctx = _tracker.createInstance<FieldsepContext>(_ctx, getState());
  enterRule(_localctx, 50, LuaParser::RuleFieldsep);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    _la = _input->LA(1);
    if (!(_la == LuaParser::T__0

    || _la == LuaParser::T__14)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorOrContext ------------------------------------------------------------------

LuaParser::OperatorOrContext::OperatorOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorOrContext::getRuleIndex() const {
  return LuaParser::RuleOperatorOr;
}

void LuaParser::OperatorOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorOr(this);
}

void LuaParser::OperatorOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorOr(this);
}

LuaParser::OperatorOrContext* LuaParser::operatorOr() {
  OperatorOrContext *_localctx = _tracker.createInstance<OperatorOrContext>(_ctx, getState());
  enterRule(_localctx, 52, LuaParser::RuleOperatorOr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(LuaParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorAndContext ------------------------------------------------------------------

LuaParser::OperatorAndContext::OperatorAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorAndContext::getRuleIndex() const {
  return LuaParser::RuleOperatorAnd;
}

void LuaParser::OperatorAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorAnd(this);
}

void LuaParser::OperatorAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorAnd(this);
}

LuaParser::OperatorAndContext* LuaParser::operatorAnd() {
  OperatorAndContext *_localctx = _tracker.createInstance<OperatorAndContext>(_ctx, getState());
  enterRule(_localctx, 54, LuaParser::RuleOperatorAnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    match(LuaParser::T__36);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorComparisonContext ------------------------------------------------------------------

LuaParser::OperatorComparisonContext::OperatorComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorComparisonContext::getRuleIndex() const {
  return LuaParser::RuleOperatorComparison;
}

void LuaParser::OperatorComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorComparison(this);
}

void LuaParser::OperatorComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorComparison(this);
}

LuaParser::OperatorComparisonContext* LuaParser::operatorComparison() {
  OperatorComparisonContext *_localctx = _tracker.createInstance<OperatorComparisonContext>(_ctx, getState());
  enterRule(_localctx, 56, LuaParser::RuleOperatorComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(407);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__18)
      | (1ULL << LuaParser::T__19)
      | (1ULL << LuaParser::T__37)
      | (1ULL << LuaParser::T__38)
      | (1ULL << LuaParser::T__39)
      | (1ULL << LuaParser::T__40))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorStrcatContext ------------------------------------------------------------------

LuaParser::OperatorStrcatContext::OperatorStrcatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorStrcatContext::getRuleIndex() const {
  return LuaParser::RuleOperatorStrcat;
}

void LuaParser::OperatorStrcatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorStrcat(this);
}

void LuaParser::OperatorStrcatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorStrcat(this);
}

LuaParser::OperatorStrcatContext* LuaParser::operatorStrcat() {
  OperatorStrcatContext *_localctx = _tracker.createInstance<OperatorStrcatContext>(_ctx, getState());
  enterRule(_localctx, 58, LuaParser::RuleOperatorStrcat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    match(LuaParser::T__41);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorAddSubContext ------------------------------------------------------------------

LuaParser::OperatorAddSubContext::OperatorAddSubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorAddSubContext::getRuleIndex() const {
  return LuaParser::RuleOperatorAddSub;
}

void LuaParser::OperatorAddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorAddSub(this);
}

void LuaParser::OperatorAddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorAddSub(this);
}

LuaParser::OperatorAddSubContext* LuaParser::operatorAddSub() {
  OperatorAddSubContext *_localctx = _tracker.createInstance<OperatorAddSubContext>(_ctx, getState());
  enterRule(_localctx, 60, LuaParser::RuleOperatorAddSub);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    _la = _input->LA(1);
    if (!(_la == LuaParser::T__42

    || _la == LuaParser::T__43)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorMulDivModContext ------------------------------------------------------------------

LuaParser::OperatorMulDivModContext::OperatorMulDivModContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorMulDivModContext::getRuleIndex() const {
  return LuaParser::RuleOperatorMulDivMod;
}

void LuaParser::OperatorMulDivModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorMulDivMod(this);
}

void LuaParser::OperatorMulDivModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorMulDivMod(this);
}

LuaParser::OperatorMulDivModContext* LuaParser::operatorMulDivMod() {
  OperatorMulDivModContext *_localctx = _tracker.createInstance<OperatorMulDivModContext>(_ctx, getState());
  enterRule(_localctx, 62, LuaParser::RuleOperatorMulDivMod);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__44)
      | (1ULL << LuaParser::T__45)
      | (1ULL << LuaParser::T__46)
      | (1ULL << LuaParser::T__47))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorBitwiseContext ------------------------------------------------------------------

LuaParser::OperatorBitwiseContext::OperatorBitwiseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorBitwiseContext::getRuleIndex() const {
  return LuaParser::RuleOperatorBitwise;
}

void LuaParser::OperatorBitwiseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorBitwise(this);
}

void LuaParser::OperatorBitwiseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorBitwise(this);
}

LuaParser::OperatorBitwiseContext* LuaParser::operatorBitwise() {
  OperatorBitwiseContext *_localctx = _tracker.createInstance<OperatorBitwiseContext>(_ctx, getState());
  enterRule(_localctx, 64, LuaParser::RuleOperatorBitwise);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(415);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__48)
      | (1ULL << LuaParser::T__49)
      | (1ULL << LuaParser::T__50)
      | (1ULL << LuaParser::T__51)
      | (1ULL << LuaParser::T__52))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorUnaryContext ------------------------------------------------------------------

LuaParser::OperatorUnaryContext::OperatorUnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorUnaryContext::getRuleIndex() const {
  return LuaParser::RuleOperatorUnary;
}

void LuaParser::OperatorUnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorUnary(this);
}

void LuaParser::OperatorUnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorUnary(this);
}

LuaParser::OperatorUnaryContext* LuaParser::operatorUnary() {
  OperatorUnaryContext *_localctx = _tracker.createInstance<OperatorUnaryContext>(_ctx, getState());
  enterRule(_localctx, 66, LuaParser::RuleOperatorUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__43)
      | (1ULL << LuaParser::T__50)
      | (1ULL << LuaParser::T__53)
      | (1ULL << LuaParser::T__54))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorPowerContext ------------------------------------------------------------------

LuaParser::OperatorPowerContext::OperatorPowerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorPowerContext::getRuleIndex() const {
  return LuaParser::RuleOperatorPower;
}

void LuaParser::OperatorPowerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorPower(this);
}

void LuaParser::OperatorPowerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorPower(this);
}

LuaParser::OperatorPowerContext* LuaParser::operatorPower() {
  OperatorPowerContext *_localctx = _tracker.createInstance<OperatorPowerContext>(_ctx, getState());
  enterRule(_localctx, 68, LuaParser::RuleOperatorPower);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(LuaParser::T__55);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

LuaParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::NumberContext::INT() {
  return getToken(LuaParser::INT, 0);
}

tree::TerminalNode* LuaParser::NumberContext::HEX() {
  return getToken(LuaParser::HEX, 0);
}

tree::TerminalNode* LuaParser::NumberContext::FLOAT() {
  return getToken(LuaParser::FLOAT, 0);
}

tree::TerminalNode* LuaParser::NumberContext::HEX_FLOAT() {
  return getToken(LuaParser::HEX_FLOAT, 0);
}


size_t LuaParser::NumberContext::getRuleIndex() const {
  return LuaParser::RuleNumber;
}

void LuaParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void LuaParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

LuaParser::NumberContext* LuaParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 70, LuaParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    _la = _input->LA(1);
    if (!(((((_la - 61) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 61)) & ((1ULL << (LuaParser::INT - 61))
      | (1ULL << (LuaParser::HEX - 61))
      | (1ULL << (LuaParser::FLOAT - 61))
      | (1ULL << (LuaParser::HEX_FLOAT - 61)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

LuaParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::StringContext::NORMALSTRING() {
  return getToken(LuaParser::NORMALSTRING, 0);
}

tree::TerminalNode* LuaParser::StringContext::CHARSTRING() {
  return getToken(LuaParser::CHARSTRING, 0);
}

tree::TerminalNode* LuaParser::StringContext::LONGSTRING() {
  return getToken(LuaParser::LONGSTRING, 0);
}


size_t LuaParser::StringContext::getRuleIndex() const {
  return LuaParser::RuleString;
}

void LuaParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void LuaParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}

LuaParser::StringContext* LuaParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 72, LuaParser::RuleString);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::NORMALSTRING)
      | (1ULL << LuaParser::CHARSTRING)
      | (1ULL << LuaParser::LONGSTRING))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LuaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 11: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LuaParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void LuaParser::initialize() {
  std::call_once(luaParserOnceFlag, luaParserInitialize);
}

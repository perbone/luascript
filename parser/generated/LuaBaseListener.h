
// Generated from Lua.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "LuaListener.h"


namespace luaparser {

/**
 * This class provides an empty implementation of LuaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LuaBaseListener : public LuaListener {
public:

  virtual void enterChunk(LuaParser::ChunkContext * /*ctx*/) override { }
  virtual void exitChunk(LuaParser::ChunkContext * /*ctx*/) override { }

  virtual void enterBlock(LuaParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(LuaParser::BlockContext * /*ctx*/) override { }

  virtual void enterStat(LuaParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(LuaParser::StatContext * /*ctx*/) override { }

  virtual void enterAttnamelist(LuaParser::AttnamelistContext * /*ctx*/) override { }
  virtual void exitAttnamelist(LuaParser::AttnamelistContext * /*ctx*/) override { }

  virtual void enterAttrib(LuaParser::AttribContext * /*ctx*/) override { }
  virtual void exitAttrib(LuaParser::AttribContext * /*ctx*/) override { }

  virtual void enterRetstat(LuaParser::RetstatContext * /*ctx*/) override { }
  virtual void exitRetstat(LuaParser::RetstatContext * /*ctx*/) override { }

  virtual void enterLabel(LuaParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(LuaParser::LabelContext * /*ctx*/) override { }

  virtual void enterFuncname(LuaParser::FuncnameContext * /*ctx*/) override { }
  virtual void exitFuncname(LuaParser::FuncnameContext * /*ctx*/) override { }

  virtual void enterVarlist(LuaParser::VarlistContext * /*ctx*/) override { }
  virtual void exitVarlist(LuaParser::VarlistContext * /*ctx*/) override { }

  virtual void enterNamelist(LuaParser::NamelistContext * /*ctx*/) override { }
  virtual void exitNamelist(LuaParser::NamelistContext * /*ctx*/) override { }

  virtual void enterExplist(LuaParser::ExplistContext * /*ctx*/) override { }
  virtual void exitExplist(LuaParser::ExplistContext * /*ctx*/) override { }

  virtual void enterExp(LuaParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(LuaParser::ExpContext * /*ctx*/) override { }

  virtual void enterPrefixexp(LuaParser::PrefixexpContext * /*ctx*/) override { }
  virtual void exitPrefixexp(LuaParser::PrefixexpContext * /*ctx*/) override { }

  virtual void enterFunctioncall(LuaParser::FunctioncallContext * /*ctx*/) override { }
  virtual void exitFunctioncall(LuaParser::FunctioncallContext * /*ctx*/) override { }

  virtual void enterVarOrExp(LuaParser::VarOrExpContext * /*ctx*/) override { }
  virtual void exitVarOrExp(LuaParser::VarOrExpContext * /*ctx*/) override { }

  virtual void enterVar(LuaParser::VarContext * /*ctx*/) override { }
  virtual void exitVar(LuaParser::VarContext * /*ctx*/) override { }

  virtual void enterVarSuffix(LuaParser::VarSuffixContext * /*ctx*/) override { }
  virtual void exitVarSuffix(LuaParser::VarSuffixContext * /*ctx*/) override { }

  virtual void enterNameAndArgs(LuaParser::NameAndArgsContext * /*ctx*/) override { }
  virtual void exitNameAndArgs(LuaParser::NameAndArgsContext * /*ctx*/) override { }

  virtual void enterArgs(LuaParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(LuaParser::ArgsContext * /*ctx*/) override { }

  virtual void enterFunctiondef(LuaParser::FunctiondefContext * /*ctx*/) override { }
  virtual void exitFunctiondef(LuaParser::FunctiondefContext * /*ctx*/) override { }

  virtual void enterFuncbody(LuaParser::FuncbodyContext * /*ctx*/) override { }
  virtual void exitFuncbody(LuaParser::FuncbodyContext * /*ctx*/) override { }

  virtual void enterParlist(LuaParser::ParlistContext * /*ctx*/) override { }
  virtual void exitParlist(LuaParser::ParlistContext * /*ctx*/) override { }

  virtual void enterTableconstructor(LuaParser::TableconstructorContext * /*ctx*/) override { }
  virtual void exitTableconstructor(LuaParser::TableconstructorContext * /*ctx*/) override { }

  virtual void enterFieldlist(LuaParser::FieldlistContext * /*ctx*/) override { }
  virtual void exitFieldlist(LuaParser::FieldlistContext * /*ctx*/) override { }

  virtual void enterField(LuaParser::FieldContext * /*ctx*/) override { }
  virtual void exitField(LuaParser::FieldContext * /*ctx*/) override { }

  virtual void enterFieldsep(LuaParser::FieldsepContext * /*ctx*/) override { }
  virtual void exitFieldsep(LuaParser::FieldsepContext * /*ctx*/) override { }

  virtual void enterOperatorOr(LuaParser::OperatorOrContext * /*ctx*/) override { }
  virtual void exitOperatorOr(LuaParser::OperatorOrContext * /*ctx*/) override { }

  virtual void enterOperatorAnd(LuaParser::OperatorAndContext * /*ctx*/) override { }
  virtual void exitOperatorAnd(LuaParser::OperatorAndContext * /*ctx*/) override { }

  virtual void enterOperatorComparison(LuaParser::OperatorComparisonContext * /*ctx*/) override { }
  virtual void exitOperatorComparison(LuaParser::OperatorComparisonContext * /*ctx*/) override { }

  virtual void enterOperatorStrcat(LuaParser::OperatorStrcatContext * /*ctx*/) override { }
  virtual void exitOperatorStrcat(LuaParser::OperatorStrcatContext * /*ctx*/) override { }

  virtual void enterOperatorAddSub(LuaParser::OperatorAddSubContext * /*ctx*/) override { }
  virtual void exitOperatorAddSub(LuaParser::OperatorAddSubContext * /*ctx*/) override { }

  virtual void enterOperatorMulDivMod(LuaParser::OperatorMulDivModContext * /*ctx*/) override { }
  virtual void exitOperatorMulDivMod(LuaParser::OperatorMulDivModContext * /*ctx*/) override { }

  virtual void enterOperatorBitwise(LuaParser::OperatorBitwiseContext * /*ctx*/) override { }
  virtual void exitOperatorBitwise(LuaParser::OperatorBitwiseContext * /*ctx*/) override { }

  virtual void enterOperatorUnary(LuaParser::OperatorUnaryContext * /*ctx*/) override { }
  virtual void exitOperatorUnary(LuaParser::OperatorUnaryContext * /*ctx*/) override { }

  virtual void enterOperatorPower(LuaParser::OperatorPowerContext * /*ctx*/) override { }
  virtual void exitOperatorPower(LuaParser::OperatorPowerContext * /*ctx*/) override { }

  virtual void enterNumber(LuaParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(LuaParser::NumberContext * /*ctx*/) override { }

  virtual void enterString(LuaParser::StringContext * /*ctx*/) override { }
  virtual void exitString(LuaParser::StringContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace luaparser

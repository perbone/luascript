
// Generated from Lua.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "LuaParser.h"


namespace luaparser {

/**
 * This interface defines an abstract listener for a parse tree produced by LuaParser.
 */
class  LuaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterChunk(LuaParser::ChunkContext *ctx) = 0;
  virtual void exitChunk(LuaParser::ChunkContext *ctx) = 0;

  virtual void enterBlock(LuaParser::BlockContext *ctx) = 0;
  virtual void exitBlock(LuaParser::BlockContext *ctx) = 0;

  virtual void enterStat(LuaParser::StatContext *ctx) = 0;
  virtual void exitStat(LuaParser::StatContext *ctx) = 0;

  virtual void enterAttnamelist(LuaParser::AttnamelistContext *ctx) = 0;
  virtual void exitAttnamelist(LuaParser::AttnamelistContext *ctx) = 0;

  virtual void enterAttrib(LuaParser::AttribContext *ctx) = 0;
  virtual void exitAttrib(LuaParser::AttribContext *ctx) = 0;

  virtual void enterRetstat(LuaParser::RetstatContext *ctx) = 0;
  virtual void exitRetstat(LuaParser::RetstatContext *ctx) = 0;

  virtual void enterLabel(LuaParser::LabelContext *ctx) = 0;
  virtual void exitLabel(LuaParser::LabelContext *ctx) = 0;

  virtual void enterFuncname(LuaParser::FuncnameContext *ctx) = 0;
  virtual void exitFuncname(LuaParser::FuncnameContext *ctx) = 0;

  virtual void enterVarlist(LuaParser::VarlistContext *ctx) = 0;
  virtual void exitVarlist(LuaParser::VarlistContext *ctx) = 0;

  virtual void enterNamelist(LuaParser::NamelistContext *ctx) = 0;
  virtual void exitNamelist(LuaParser::NamelistContext *ctx) = 0;

  virtual void enterExplist(LuaParser::ExplistContext *ctx) = 0;
  virtual void exitExplist(LuaParser::ExplistContext *ctx) = 0;

  virtual void enterExp(LuaParser::ExpContext *ctx) = 0;
  virtual void exitExp(LuaParser::ExpContext *ctx) = 0;

  virtual void enterPrefixexp(LuaParser::PrefixexpContext *ctx) = 0;
  virtual void exitPrefixexp(LuaParser::PrefixexpContext *ctx) = 0;

  virtual void enterFunctioncall(LuaParser::FunctioncallContext *ctx) = 0;
  virtual void exitFunctioncall(LuaParser::FunctioncallContext *ctx) = 0;

  virtual void enterVarOrExp(LuaParser::VarOrExpContext *ctx) = 0;
  virtual void exitVarOrExp(LuaParser::VarOrExpContext *ctx) = 0;

  virtual void enterVar(LuaParser::VarContext *ctx) = 0;
  virtual void exitVar(LuaParser::VarContext *ctx) = 0;

  virtual void enterVarSuffix(LuaParser::VarSuffixContext *ctx) = 0;
  virtual void exitVarSuffix(LuaParser::VarSuffixContext *ctx) = 0;

  virtual void enterNameAndArgs(LuaParser::NameAndArgsContext *ctx) = 0;
  virtual void exitNameAndArgs(LuaParser::NameAndArgsContext *ctx) = 0;

  virtual void enterArgs(LuaParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(LuaParser::ArgsContext *ctx) = 0;

  virtual void enterFunctiondef(LuaParser::FunctiondefContext *ctx) = 0;
  virtual void exitFunctiondef(LuaParser::FunctiondefContext *ctx) = 0;

  virtual void enterFuncbody(LuaParser::FuncbodyContext *ctx) = 0;
  virtual void exitFuncbody(LuaParser::FuncbodyContext *ctx) = 0;

  virtual void enterParlist(LuaParser::ParlistContext *ctx) = 0;
  virtual void exitParlist(LuaParser::ParlistContext *ctx) = 0;

  virtual void enterTableconstructor(LuaParser::TableconstructorContext *ctx) = 0;
  virtual void exitTableconstructor(LuaParser::TableconstructorContext *ctx) = 0;

  virtual void enterFieldlist(LuaParser::FieldlistContext *ctx) = 0;
  virtual void exitFieldlist(LuaParser::FieldlistContext *ctx) = 0;

  virtual void enterField(LuaParser::FieldContext *ctx) = 0;
  virtual void exitField(LuaParser::FieldContext *ctx) = 0;

  virtual void enterFieldsep(LuaParser::FieldsepContext *ctx) = 0;
  virtual void exitFieldsep(LuaParser::FieldsepContext *ctx) = 0;

  virtual void enterOperatorOr(LuaParser::OperatorOrContext *ctx) = 0;
  virtual void exitOperatorOr(LuaParser::OperatorOrContext *ctx) = 0;

  virtual void enterOperatorAnd(LuaParser::OperatorAndContext *ctx) = 0;
  virtual void exitOperatorAnd(LuaParser::OperatorAndContext *ctx) = 0;

  virtual void enterOperatorComparison(LuaParser::OperatorComparisonContext *ctx) = 0;
  virtual void exitOperatorComparison(LuaParser::OperatorComparisonContext *ctx) = 0;

  virtual void enterOperatorStrcat(LuaParser::OperatorStrcatContext *ctx) = 0;
  virtual void exitOperatorStrcat(LuaParser::OperatorStrcatContext *ctx) = 0;

  virtual void enterOperatorAddSub(LuaParser::OperatorAddSubContext *ctx) = 0;
  virtual void exitOperatorAddSub(LuaParser::OperatorAddSubContext *ctx) = 0;

  virtual void enterOperatorMulDivMod(LuaParser::OperatorMulDivModContext *ctx) = 0;
  virtual void exitOperatorMulDivMod(LuaParser::OperatorMulDivModContext *ctx) = 0;

  virtual void enterOperatorBitwise(LuaParser::OperatorBitwiseContext *ctx) = 0;
  virtual void exitOperatorBitwise(LuaParser::OperatorBitwiseContext *ctx) = 0;

  virtual void enterOperatorUnary(LuaParser::OperatorUnaryContext *ctx) = 0;
  virtual void exitOperatorUnary(LuaParser::OperatorUnaryContext *ctx) = 0;

  virtual void enterOperatorPower(LuaParser::OperatorPowerContext *ctx) = 0;
  virtual void exitOperatorPower(LuaParser::OperatorPowerContext *ctx) = 0;

  virtual void enterNumber(LuaParser::NumberContext *ctx) = 0;
  virtual void exitNumber(LuaParser::NumberContext *ctx) = 0;

  virtual void enterString(LuaParser::StringContext *ctx) = 0;
  virtual void exitString(LuaParser::StringContext *ctx) = 0;


};

}  // namespace luaparser

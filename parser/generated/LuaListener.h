
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

  virtual void enterStatEmptySemicolon(LuaParser::StatEmptySemicolonContext *ctx) = 0;
  virtual void exitStatEmptySemicolon(LuaParser::StatEmptySemicolonContext *ctx) = 0;

  virtual void enterStatAssignment(LuaParser::StatAssignmentContext *ctx) = 0;
  virtual void exitStatAssignment(LuaParser::StatAssignmentContext *ctx) = 0;

  virtual void enterStatFunctionCall(LuaParser::StatFunctionCallContext *ctx) = 0;
  virtual void exitStatFunctionCall(LuaParser::StatFunctionCallContext *ctx) = 0;

  virtual void enterStatLabel(LuaParser::StatLabelContext *ctx) = 0;
  virtual void exitStatLabel(LuaParser::StatLabelContext *ctx) = 0;

  virtual void enterStatBreak(LuaParser::StatBreakContext *ctx) = 0;
  virtual void exitStatBreak(LuaParser::StatBreakContext *ctx) = 0;

  virtual void enterStatGoto(LuaParser::StatGotoContext *ctx) = 0;
  virtual void exitStatGoto(LuaParser::StatGotoContext *ctx) = 0;

  virtual void enterStatDo(LuaParser::StatDoContext *ctx) = 0;
  virtual void exitStatDo(LuaParser::StatDoContext *ctx) = 0;

  virtual void enterStatWhile(LuaParser::StatWhileContext *ctx) = 0;
  virtual void exitStatWhile(LuaParser::StatWhileContext *ctx) = 0;

  virtual void enterStatRepeat(LuaParser::StatRepeatContext *ctx) = 0;
  virtual void exitStatRepeat(LuaParser::StatRepeatContext *ctx) = 0;

  virtual void enterStatIfThenElse(LuaParser::StatIfThenElseContext *ctx) = 0;
  virtual void exitStatIfThenElse(LuaParser::StatIfThenElseContext *ctx) = 0;

  virtual void enterStatNumericFor(LuaParser::StatNumericForContext *ctx) = 0;
  virtual void exitStatNumericFor(LuaParser::StatNumericForContext *ctx) = 0;

  virtual void enterStatGenericFor(LuaParser::StatGenericForContext *ctx) = 0;
  virtual void exitStatGenericFor(LuaParser::StatGenericForContext *ctx) = 0;

  virtual void enterStatFunction(LuaParser::StatFunctionContext *ctx) = 0;
  virtual void exitStatFunction(LuaParser::StatFunctionContext *ctx) = 0;

  virtual void enterStatLocalFunction(LuaParser::StatLocalFunctionContext *ctx) = 0;
  virtual void exitStatLocalFunction(LuaParser::StatLocalFunctionContext *ctx) = 0;

  virtual void enterStatLocalNameList(LuaParser::StatLocalNameListContext *ctx) = 0;
  virtual void exitStatLocalNameList(LuaParser::StatLocalNameListContext *ctx) = 0;

  virtual void enterStatReturn(LuaParser::StatReturnContext *ctx) = 0;
  virtual void exitStatReturn(LuaParser::StatReturnContext *ctx) = 0;

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

  virtual void enterExpOperatorBitwise(LuaParser::ExpOperatorBitwiseContext *ctx) = 0;
  virtual void exitExpOperatorBitwise(LuaParser::ExpOperatorBitwiseContext *ctx) = 0;

  virtual void enterExpFalse(LuaParser::ExpFalseContext *ctx) = 0;
  virtual void exitExpFalse(LuaParser::ExpFalseContext *ctx) = 0;

  virtual void enterExpVararg(LuaParser::ExpVarargContext *ctx) = 0;
  virtual void exitExpVararg(LuaParser::ExpVarargContext *ctx) = 0;

  virtual void enterExpTableConstructor(LuaParser::ExpTableConstructorContext *ctx) = 0;
  virtual void exitExpTableConstructor(LuaParser::ExpTableConstructorContext *ctx) = 0;

  virtual void enterExpPrefixExp(LuaParser::ExpPrefixExpContext *ctx) = 0;
  virtual void exitExpPrefixExp(LuaParser::ExpPrefixExpContext *ctx) = 0;

  virtual void enterExpTrue(LuaParser::ExpTrueContext *ctx) = 0;
  virtual void exitExpTrue(LuaParser::ExpTrueContext *ctx) = 0;

  virtual void enterExpNumber(LuaParser::ExpNumberContext *ctx) = 0;
  virtual void exitExpNumber(LuaParser::ExpNumberContext *ctx) = 0;

  virtual void enterExpOperatorUnary(LuaParser::ExpOperatorUnaryContext *ctx) = 0;
  virtual void exitExpOperatorUnary(LuaParser::ExpOperatorUnaryContext *ctx) = 0;

  virtual void enterExpOperatorAnd(LuaParser::ExpOperatorAndContext *ctx) = 0;
  virtual void exitExpOperatorAnd(LuaParser::ExpOperatorAndContext *ctx) = 0;

  virtual void enterExpOperatorPower(LuaParser::ExpOperatorPowerContext *ctx) = 0;
  virtual void exitExpOperatorPower(LuaParser::ExpOperatorPowerContext *ctx) = 0;

  virtual void enterExpOperatorAddSub(LuaParser::ExpOperatorAddSubContext *ctx) = 0;
  virtual void exitExpOperatorAddSub(LuaParser::ExpOperatorAddSubContext *ctx) = 0;

  virtual void enterExpOperatorStrcat(LuaParser::ExpOperatorStrcatContext *ctx) = 0;
  virtual void exitExpOperatorStrcat(LuaParser::ExpOperatorStrcatContext *ctx) = 0;

  virtual void enterExpOperatorComparison(LuaParser::ExpOperatorComparisonContext *ctx) = 0;
  virtual void exitExpOperatorComparison(LuaParser::ExpOperatorComparisonContext *ctx) = 0;

  virtual void enterExpNil(LuaParser::ExpNilContext *ctx) = 0;
  virtual void exitExpNil(LuaParser::ExpNilContext *ctx) = 0;

  virtual void enterExpOperatorOr(LuaParser::ExpOperatorOrContext *ctx) = 0;
  virtual void exitExpOperatorOr(LuaParser::ExpOperatorOrContext *ctx) = 0;

  virtual void enterExpString(LuaParser::ExpStringContext *ctx) = 0;
  virtual void exitExpString(LuaParser::ExpStringContext *ctx) = 0;

  virtual void enterExpOperatorMulDivMod(LuaParser::ExpOperatorMulDivModContext *ctx) = 0;
  virtual void exitExpOperatorMulDivMod(LuaParser::ExpOperatorMulDivModContext *ctx) = 0;

  virtual void enterExpFunctionDef(LuaParser::ExpFunctionDefContext *ctx) = 0;
  virtual void exitExpFunctionDef(LuaParser::ExpFunctionDefContext *ctx) = 0;

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

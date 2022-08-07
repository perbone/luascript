
// Generated from /Users/perbone/Work/luascript/Lua.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "LuaListener.h"


namespace parser::generated {

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

  virtual void enterStatEmptySemicolon(LuaParser::StatEmptySemicolonContext * /*ctx*/) override { }
  virtual void exitStatEmptySemicolon(LuaParser::StatEmptySemicolonContext * /*ctx*/) override { }

  virtual void enterStatAssignment(LuaParser::StatAssignmentContext * /*ctx*/) override { }
  virtual void exitStatAssignment(LuaParser::StatAssignmentContext * /*ctx*/) override { }

  virtual void enterStatFunctionCall(LuaParser::StatFunctionCallContext * /*ctx*/) override { }
  virtual void exitStatFunctionCall(LuaParser::StatFunctionCallContext * /*ctx*/) override { }

  virtual void enterStatLabel(LuaParser::StatLabelContext * /*ctx*/) override { }
  virtual void exitStatLabel(LuaParser::StatLabelContext * /*ctx*/) override { }

  virtual void enterStatBreak(LuaParser::StatBreakContext * /*ctx*/) override { }
  virtual void exitStatBreak(LuaParser::StatBreakContext * /*ctx*/) override { }

  virtual void enterStatGoto(LuaParser::StatGotoContext * /*ctx*/) override { }
  virtual void exitStatGoto(LuaParser::StatGotoContext * /*ctx*/) override { }

  virtual void enterStatDo(LuaParser::StatDoContext * /*ctx*/) override { }
  virtual void exitStatDo(LuaParser::StatDoContext * /*ctx*/) override { }

  virtual void enterStatWhile(LuaParser::StatWhileContext * /*ctx*/) override { }
  virtual void exitStatWhile(LuaParser::StatWhileContext * /*ctx*/) override { }

  virtual void enterStatRepeat(LuaParser::StatRepeatContext * /*ctx*/) override { }
  virtual void exitStatRepeat(LuaParser::StatRepeatContext * /*ctx*/) override { }

  virtual void enterStatIfThenElse(LuaParser::StatIfThenElseContext * /*ctx*/) override { }
  virtual void exitStatIfThenElse(LuaParser::StatIfThenElseContext * /*ctx*/) override { }

  virtual void enterStatNumericFor(LuaParser::StatNumericForContext * /*ctx*/) override { }
  virtual void exitStatNumericFor(LuaParser::StatNumericForContext * /*ctx*/) override { }

  virtual void enterStatGenericFor(LuaParser::StatGenericForContext * /*ctx*/) override { }
  virtual void exitStatGenericFor(LuaParser::StatGenericForContext * /*ctx*/) override { }

  virtual void enterStatFunction(LuaParser::StatFunctionContext * /*ctx*/) override { }
  virtual void exitStatFunction(LuaParser::StatFunctionContext * /*ctx*/) override { }

  virtual void enterStatLocalFunction(LuaParser::StatLocalFunctionContext * /*ctx*/) override { }
  virtual void exitStatLocalFunction(LuaParser::StatLocalFunctionContext * /*ctx*/) override { }

  virtual void enterStatLocalAttributeNameList(LuaParser::StatLocalAttributeNameListContext * /*ctx*/) override { }
  virtual void exitStatLocalAttributeNameList(LuaParser::StatLocalAttributeNameListContext * /*ctx*/) override { }

  virtual void enterAttnamelist(LuaParser::AttnamelistContext * /*ctx*/) override { }
  virtual void exitAttnamelist(LuaParser::AttnamelistContext * /*ctx*/) override { }

  virtual void enterAttrib(LuaParser::AttribContext * /*ctx*/) override { }
  virtual void exitAttrib(LuaParser::AttribContext * /*ctx*/) override { }

  virtual void enterLaststat(LuaParser::LaststatContext * /*ctx*/) override { }
  virtual void exitLaststat(LuaParser::LaststatContext * /*ctx*/) override { }

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

  virtual void enterExpOperatorBitwise(LuaParser::ExpOperatorBitwiseContext * /*ctx*/) override { }
  virtual void exitExpOperatorBitwise(LuaParser::ExpOperatorBitwiseContext * /*ctx*/) override { }

  virtual void enterExpFalse(LuaParser::ExpFalseContext * /*ctx*/) override { }
  virtual void exitExpFalse(LuaParser::ExpFalseContext * /*ctx*/) override { }

  virtual void enterExpVararg(LuaParser::ExpVarargContext * /*ctx*/) override { }
  virtual void exitExpVararg(LuaParser::ExpVarargContext * /*ctx*/) override { }

  virtual void enterExpTableConstructor(LuaParser::ExpTableConstructorContext * /*ctx*/) override { }
  virtual void exitExpTableConstructor(LuaParser::ExpTableConstructorContext * /*ctx*/) override { }

  virtual void enterExpPrefixExp(LuaParser::ExpPrefixExpContext * /*ctx*/) override { }
  virtual void exitExpPrefixExp(LuaParser::ExpPrefixExpContext * /*ctx*/) override { }

  virtual void enterExpTrue(LuaParser::ExpTrueContext * /*ctx*/) override { }
  virtual void exitExpTrue(LuaParser::ExpTrueContext * /*ctx*/) override { }

  virtual void enterExpNumber(LuaParser::ExpNumberContext * /*ctx*/) override { }
  virtual void exitExpNumber(LuaParser::ExpNumberContext * /*ctx*/) override { }

  virtual void enterExpOperatorUnary(LuaParser::ExpOperatorUnaryContext * /*ctx*/) override { }
  virtual void exitExpOperatorUnary(LuaParser::ExpOperatorUnaryContext * /*ctx*/) override { }

  virtual void enterExpOperatorAnd(LuaParser::ExpOperatorAndContext * /*ctx*/) override { }
  virtual void exitExpOperatorAnd(LuaParser::ExpOperatorAndContext * /*ctx*/) override { }

  virtual void enterExpOperatorPower(LuaParser::ExpOperatorPowerContext * /*ctx*/) override { }
  virtual void exitExpOperatorPower(LuaParser::ExpOperatorPowerContext * /*ctx*/) override { }

  virtual void enterExpOperatorAddSub(LuaParser::ExpOperatorAddSubContext * /*ctx*/) override { }
  virtual void exitExpOperatorAddSub(LuaParser::ExpOperatorAddSubContext * /*ctx*/) override { }

  virtual void enterExpOperatorStrcat(LuaParser::ExpOperatorStrcatContext * /*ctx*/) override { }
  virtual void exitExpOperatorStrcat(LuaParser::ExpOperatorStrcatContext * /*ctx*/) override { }

  virtual void enterExpOperatorComparison(LuaParser::ExpOperatorComparisonContext * /*ctx*/) override { }
  virtual void exitExpOperatorComparison(LuaParser::ExpOperatorComparisonContext * /*ctx*/) override { }

  virtual void enterExpNil(LuaParser::ExpNilContext * /*ctx*/) override { }
  virtual void exitExpNil(LuaParser::ExpNilContext * /*ctx*/) override { }

  virtual void enterExpOperatorOr(LuaParser::ExpOperatorOrContext * /*ctx*/) override { }
  virtual void exitExpOperatorOr(LuaParser::ExpOperatorOrContext * /*ctx*/) override { }

  virtual void enterExpString(LuaParser::ExpStringContext * /*ctx*/) override { }
  virtual void exitExpString(LuaParser::ExpStringContext * /*ctx*/) override { }

  virtual void enterExpOperatorMulDivMod(LuaParser::ExpOperatorMulDivModContext * /*ctx*/) override { }
  virtual void exitExpOperatorMulDivMod(LuaParser::ExpOperatorMulDivModContext * /*ctx*/) override { }

  virtual void enterExpFunctionDef(LuaParser::ExpFunctionDefContext * /*ctx*/) override { }
  virtual void exitExpFunctionDef(LuaParser::ExpFunctionDefContext * /*ctx*/) override { }

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

}  // namespace parser::generated

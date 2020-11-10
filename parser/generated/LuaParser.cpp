
// Generated from Lua.g4 by ANTLR 4.8


#include "LuaListener.h"

#include "LuaParser.h"


using namespace antlrcpp;
using namespace luaparser;
using namespace antlr4;

LuaParser::LuaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

LuaParser::~LuaParser() {
  delete _interpreter;
}

std::string LuaParser::getGrammarFileName() const {
  return "Lua.g4";
}

const std::vector<std::string>& LuaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& LuaParser::getVocabulary() const {
  return _vocabulary;
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
    setState(70);
    block();
    setState(71);
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

LuaParser::RetstatContext* LuaParser::BlockContext::retstat() {
  return getRuleContext<LuaParser::RetstatContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__0)
      | (1ULL << LuaParser::T__2)
      | (1ULL << LuaParser::T__3)
      | (1ULL << LuaParser::T__4)
      | (1ULL << LuaParser::T__6)
      | (1ULL << LuaParser::T__7)
      | (1ULL << LuaParser::T__9)
      | (1ULL << LuaParser::T__13)
      | (1ULL << LuaParser::T__16)
      | (1ULL << LuaParser::T__17)
      | (1ULL << LuaParser::T__19)
      | (1ULL << LuaParser::T__26)
      | (1ULL << LuaParser::NAME))) != 0)) {
      setState(73);
      stat();
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__18) {
      setState(79);
      retstat();
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
//----------------- StatLocalNameListContext ------------------------------------------------------------------

LuaParser::NamelistContext* LuaParser::StatLocalNameListContext::namelist() {
  return getRuleContext<LuaParser::NamelistContext>(0);
}

LuaParser::ExplistContext* LuaParser::StatLocalNameListContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

LuaParser::StatLocalNameListContext::StatLocalNameListContext(StatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatLocalNameListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatLocalNameList(this);
}
void LuaParser::StatLocalNameListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatLocalNameList(this);
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
    setState(163);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatEmptySemicolonContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(82);
      match(LuaParser::T__0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(83);
      varlist();
      setState(84);
      match(LuaParser::T__1);
      setState(85);
      explist();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatFunctionCallContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(87);
      functioncall();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatLabelContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(88);
      label();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatBreakContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(89);
      match(LuaParser::T__2);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatGotoContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(90);
      match(LuaParser::T__3);
      setState(91);
      match(LuaParser::NAME);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatDoContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(92);
      match(LuaParser::T__4);
      setState(93);
      block();
      setState(94);
      match(LuaParser::T__5);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatWhileContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(96);
      match(LuaParser::T__6);
      setState(97);
      exp(0);
      setState(98);
      match(LuaParser::T__4);
      setState(99);
      block();
      setState(100);
      match(LuaParser::T__5);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatRepeatContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(102);
      match(LuaParser::T__7);
      setState(103);
      block();
      setState(104);
      match(LuaParser::T__8);
      setState(105);
      exp(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatIfThenElseContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(107);
      match(LuaParser::T__9);
      setState(108);
      exp(0);
      setState(109);
      match(LuaParser::T__10);
      setState(110);
      block();
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LuaParser::T__11) {
        setState(111);
        match(LuaParser::T__11);
        setState(112);
        exp(0);
        setState(113);
        match(LuaParser::T__10);
        setState(114);
        block();
        setState(120);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(123);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuaParser::T__12) {
        setState(121);
        match(LuaParser::T__12);
        setState(122);
        block();
      }
      setState(125);
      match(LuaParser::T__5);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatNumericForContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(127);
      match(LuaParser::T__13);
      setState(128);
      match(LuaParser::NAME);
      setState(129);
      match(LuaParser::T__1);
      setState(130);
      exp(0);
      setState(131);
      match(LuaParser::T__14);
      setState(132);
      exp(0);
      setState(135);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuaParser::T__14) {
        setState(133);
        match(LuaParser::T__14);
        setState(134);
        exp(0);
      }
      setState(137);
      match(LuaParser::T__4);
      setState(138);
      block();
      setState(139);
      match(LuaParser::T__5);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatGenericForContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(141);
      match(LuaParser::T__13);
      setState(142);
      namelist();
      setState(143);
      match(LuaParser::T__15);
      setState(144);
      explist();
      setState(145);
      match(LuaParser::T__4);
      setState(146);
      block();
      setState(147);
      match(LuaParser::T__5);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatFunctionContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(149);
      match(LuaParser::T__16);
      setState(150);
      funcname();
      setState(151);
      funcbody();
      break;
    }

    case 14: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatLocalFunctionContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(153);
      match(LuaParser::T__17);
      setState(154);
      match(LuaParser::T__16);
      setState(155);
      match(LuaParser::NAME);
      setState(156);
      funcbody();
      break;
    }

    case 15: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<LuaParser::StatLocalNameListContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(157);
      match(LuaParser::T__17);
      setState(158);
      namelist();
      setState(161);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuaParser::T__1) {
        setState(159);
        match(LuaParser::T__1);
        setState(160);
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

//----------------- RetstatContext ------------------------------------------------------------------

LuaParser::RetstatContext::RetstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::RetstatContext::getRuleIndex() const {
  return LuaParser::RuleRetstat;
}

void LuaParser::RetstatContext::copyFrom(RetstatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatReturnContext ------------------------------------------------------------------

LuaParser::ExplistContext* LuaParser::StatReturnContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

LuaParser::StatReturnContext::StatReturnContext(RetstatContext *ctx) { copyFrom(ctx); }

void LuaParser::StatReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatReturn(this);
}
void LuaParser::StatReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatReturn(this);
}
LuaParser::RetstatContext* LuaParser::retstat() {
  RetstatContext *_localctx = _tracker.createInstance<RetstatContext>(_ctx, getState());
  enterRule(_localctx, 6, LuaParser::RuleRetstat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = dynamic_cast<RetstatContext *>(_tracker.createInstance<LuaParser::StatReturnContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(LuaParser::T__18);
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__16)
      | (1ULL << LuaParser::T__22)
      | (1ULL << LuaParser::T__23)
      | (1ULL << LuaParser::T__24)
      | (1ULL << LuaParser::T__25)
      | (1ULL << LuaParser::T__26)
      | (1ULL << LuaParser::T__30)
      | (1ULL << LuaParser::T__42)
      | (1ULL << LuaParser::T__49)
      | (1ULL << LuaParser::T__52)
      | (1ULL << LuaParser::T__53)
      | (1ULL << LuaParser::NAME)
      | (1ULL << LuaParser::NORMALSTRING)
      | (1ULL << LuaParser::CHARSTRING)
      | (1ULL << LuaParser::LONGSTRING)
      | (1ULL << LuaParser::INT)
      | (1ULL << LuaParser::HEX)
      | (1ULL << LuaParser::FLOAT)
      | (1ULL << LuaParser::HEX_FLOAT))) != 0)) {
      setState(166);
      explist();
    }
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__0) {
      setState(169);
      match(LuaParser::T__0);
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
  enterRule(_localctx, 8, LuaParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    match(LuaParser::T__19);
    setState(173);
    match(LuaParser::NAME);
    setState(174);
    match(LuaParser::T__19);
   
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
  enterRule(_localctx, 10, LuaParser::RuleFuncname);
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
    setState(176);
    match(LuaParser::NAME);
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__20) {
      setState(177);
      match(LuaParser::T__20);
      setState(178);
      match(LuaParser::NAME);
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__21) {
      setState(184);
      match(LuaParser::T__21);
      setState(185);
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
  enterRule(_localctx, 12, LuaParser::RuleVarlist);
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
    setState(188);
    var();
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__14) {
      setState(189);
      match(LuaParser::T__14);
      setState(190);
      var();
      setState(195);
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
  enterRule(_localctx, 14, LuaParser::RuleNamelist);

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
    setState(196);
    match(LuaParser::NAME);
    setState(201);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(197);
        match(LuaParser::T__14);
        setState(198);
        match(LuaParser::NAME); 
      }
      setState(203);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
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
  enterRule(_localctx, 16, LuaParser::RuleExplist);
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
    setState(204);
    exp(0);
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__14) {
      setState(205);
      match(LuaParser::T__14);
      setState(206);
      exp(0);
      setState(211);
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
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, LuaParser::RuleExp, precedence);

    

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
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__22: {
        _localctx = _tracker.createInstance<ExpNilContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(213);
        match(LuaParser::T__22);
        break;
      }

      case LuaParser::T__23: {
        _localctx = _tracker.createInstance<ExpFalseContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(214);
        match(LuaParser::T__23);
        break;
      }

      case LuaParser::T__24: {
        _localctx = _tracker.createInstance<ExpTrueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(215);
        match(LuaParser::T__24);
        break;
      }

      case LuaParser::INT:
      case LuaParser::HEX:
      case LuaParser::FLOAT:
      case LuaParser::HEX_FLOAT: {
        _localctx = _tracker.createInstance<ExpNumberContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(216);
        number();
        break;
      }

      case LuaParser::NORMALSTRING:
      case LuaParser::CHARSTRING:
      case LuaParser::LONGSTRING: {
        _localctx = _tracker.createInstance<ExpStringContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(217);
        string();
        break;
      }

      case LuaParser::T__25: {
        _localctx = _tracker.createInstance<ExpVarargContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(218);
        match(LuaParser::T__25);
        break;
      }

      case LuaParser::T__16: {
        _localctx = _tracker.createInstance<ExpFunctionDefContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(219);
        functiondef();
        break;
      }

      case LuaParser::T__26:
      case LuaParser::NAME: {
        _localctx = _tracker.createInstance<ExpPrefixExpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(220);
        prefixexp();
        break;
      }

      case LuaParser::T__30: {
        _localctx = _tracker.createInstance<ExpTableConstructorContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(221);
        tableconstructor();
        break;
      }

      case LuaParser::T__42:
      case LuaParser::T__49:
      case LuaParser::T__52:
      case LuaParser::T__53: {
        _localctx = _tracker.createInstance<ExpOperatorUnaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(222);
        operatorUnary();
        setState(223);
        exp(8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(261);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(259);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExpOperatorPowerContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(227);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(228);
          operatorPower();
          setState(229);
          exp(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExpOperatorMulDivModContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(231);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(232);
          operatorMulDivMod();
          setState(233);
          exp(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExpOperatorAddSubContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(235);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(236);
          operatorAddSub();
          setState(237);
          exp(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ExpOperatorStrcatContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(239);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(240);
          operatorStrcat();
          setState(241);
          exp(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ExpOperatorComparisonContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(243);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(244);
          operatorComparison();
          setState(245);
          exp(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ExpOperatorAndContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(247);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(248);
          operatorAnd();
          setState(249);
          exp(4);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<ExpOperatorOrContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(251);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(252);
          operatorOr();
          setState(253);
          exp(3);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ExpOperatorBitwiseContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExp);
          setState(255);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(256);
          operatorBitwise();
          setState(257);
          exp(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(263);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
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
  enterRule(_localctx, 20, LuaParser::RulePrefixexp);

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
    setState(264);
    varOrExp();
    setState(268);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(265);
        nameAndArgs(); 
      }
      setState(270);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
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
  enterRule(_localctx, 22, LuaParser::RuleFunctioncall);

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
    setState(271);
    varOrExp();
    setState(273); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(272);
              nameAndArgs();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(275); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
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
  enterRule(_localctx, 24, LuaParser::RuleVarOrExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(282);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(277);
      var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(278);
      match(LuaParser::T__26);
      setState(279);
      exp(0);
      setState(280);
      match(LuaParser::T__27);
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
  enterRule(_localctx, 26, LuaParser::RuleVar);

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
    setState(290);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::NAME: {
        setState(284);
        match(LuaParser::NAME);
        break;
      }

      case LuaParser::T__26: {
        setState(285);
        match(LuaParser::T__26);
        setState(286);
        exp(0);
        setState(287);
        match(LuaParser::T__27);
        setState(288);
        varSuffix();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(295);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(292);
        varSuffix(); 
      }
      setState(297);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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
  enterRule(_localctx, 28, LuaParser::RuleVarSuffix);
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
    setState(301);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__21)
      | (1ULL << LuaParser::T__26)
      | (1ULL << LuaParser::T__30)
      | (1ULL << LuaParser::NORMALSTRING)
      | (1ULL << LuaParser::CHARSTRING)
      | (1ULL << LuaParser::LONGSTRING))) != 0)) {
      setState(298);
      nameAndArgs();
      setState(303);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(310);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__28: {
        setState(304);
        match(LuaParser::T__28);
        setState(305);
        exp(0);
        setState(306);
        match(LuaParser::T__29);
        break;
      }

      case LuaParser::T__20: {
        setState(308);
        match(LuaParser::T__20);
        setState(309);
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
  enterRule(_localctx, 30, LuaParser::RuleNameAndArgs);
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
    setState(314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__21) {
      setState(312);
      match(LuaParser::T__21);
      setState(313);
      match(LuaParser::NAME);
    }
    setState(316);
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
  enterRule(_localctx, 32, LuaParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__26: {
        enterOuterAlt(_localctx, 1);
        setState(318);
        match(LuaParser::T__26);
        setState(320);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << LuaParser::T__16)
          | (1ULL << LuaParser::T__22)
          | (1ULL << LuaParser::T__23)
          | (1ULL << LuaParser::T__24)
          | (1ULL << LuaParser::T__25)
          | (1ULL << LuaParser::T__26)
          | (1ULL << LuaParser::T__30)
          | (1ULL << LuaParser::T__42)
          | (1ULL << LuaParser::T__49)
          | (1ULL << LuaParser::T__52)
          | (1ULL << LuaParser::T__53)
          | (1ULL << LuaParser::NAME)
          | (1ULL << LuaParser::NORMALSTRING)
          | (1ULL << LuaParser::CHARSTRING)
          | (1ULL << LuaParser::LONGSTRING)
          | (1ULL << LuaParser::INT)
          | (1ULL << LuaParser::HEX)
          | (1ULL << LuaParser::FLOAT)
          | (1ULL << LuaParser::HEX_FLOAT))) != 0)) {
          setState(319);
          explist();
        }
        setState(322);
        match(LuaParser::T__27);
        break;
      }

      case LuaParser::T__30: {
        enterOuterAlt(_localctx, 2);
        setState(323);
        tableconstructor();
        break;
      }

      case LuaParser::NORMALSTRING:
      case LuaParser::CHARSTRING:
      case LuaParser::LONGSTRING: {
        enterOuterAlt(_localctx, 3);
        setState(324);
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
  enterRule(_localctx, 34, LuaParser::RuleFunctiondef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(LuaParser::T__16);
    setState(328);
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
  enterRule(_localctx, 36, LuaParser::RuleFuncbody);
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
    setState(330);
    match(LuaParser::T__26);
    setState(332);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__25

    || _la == LuaParser::NAME) {
      setState(331);
      parlist();
    }
    setState(334);
    match(LuaParser::T__27);
    setState(335);
    block();
    setState(336);
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
  enterRule(_localctx, 38, LuaParser::RuleParlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(344);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(338);
        namelist();
        setState(341);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LuaParser::T__14) {
          setState(339);
          match(LuaParser::T__14);
          setState(340);
          match(LuaParser::T__25);
        }
        break;
      }

      case LuaParser::T__25: {
        enterOuterAlt(_localctx, 2);
        setState(343);
        match(LuaParser::T__25);
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
  enterRule(_localctx, 40, LuaParser::RuleTableconstructor);
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
    setState(346);
    match(LuaParser::T__30);
    setState(348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__16)
      | (1ULL << LuaParser::T__22)
      | (1ULL << LuaParser::T__23)
      | (1ULL << LuaParser::T__24)
      | (1ULL << LuaParser::T__25)
      | (1ULL << LuaParser::T__26)
      | (1ULL << LuaParser::T__28)
      | (1ULL << LuaParser::T__30)
      | (1ULL << LuaParser::T__42)
      | (1ULL << LuaParser::T__49)
      | (1ULL << LuaParser::T__52)
      | (1ULL << LuaParser::T__53)
      | (1ULL << LuaParser::NAME)
      | (1ULL << LuaParser::NORMALSTRING)
      | (1ULL << LuaParser::CHARSTRING)
      | (1ULL << LuaParser::LONGSTRING)
      | (1ULL << LuaParser::INT)
      | (1ULL << LuaParser::HEX)
      | (1ULL << LuaParser::FLOAT)
      | (1ULL << LuaParser::HEX_FLOAT))) != 0)) {
      setState(347);
      fieldlist();
    }
    setState(350);
    match(LuaParser::T__31);
   
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
  enterRule(_localctx, 42, LuaParser::RuleFieldlist);
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
    setState(352);
    field();
    setState(358);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(353);
        fieldsep();
        setState(354);
        field(); 
      }
      setState(360);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
    setState(362);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__0

    || _la == LuaParser::T__14) {
      setState(361);
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
  enterRule(_localctx, 44, LuaParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(374);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(364);
      match(LuaParser::T__28);
      setState(365);
      exp(0);
      setState(366);
      match(LuaParser::T__29);
      setState(367);
      match(LuaParser::T__1);
      setState(368);
      exp(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(370);
      match(LuaParser::NAME);
      setState(371);
      match(LuaParser::T__1);
      setState(372);
      exp(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(373);
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
  enterRule(_localctx, 46, LuaParser::RuleFieldsep);
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
    setState(376);
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
  enterRule(_localctx, 48, LuaParser::RuleOperatorOr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(378);
    match(LuaParser::T__32);
   
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
  enterRule(_localctx, 50, LuaParser::RuleOperatorAnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    match(LuaParser::T__33);
   
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
  enterRule(_localctx, 52, LuaParser::RuleOperatorComparison);
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
    setState(382);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__34)
      | (1ULL << LuaParser::T__35)
      | (1ULL << LuaParser::T__36)
      | (1ULL << LuaParser::T__37)
      | (1ULL << LuaParser::T__38)
      | (1ULL << LuaParser::T__39))) != 0))) {
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
  enterRule(_localctx, 54, LuaParser::RuleOperatorStrcat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    match(LuaParser::T__40);
   
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
  enterRule(_localctx, 56, LuaParser::RuleOperatorAddSub);
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
    setState(386);
    _la = _input->LA(1);
    if (!(_la == LuaParser::T__41

    || _la == LuaParser::T__42)) {
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
  enterRule(_localctx, 58, LuaParser::RuleOperatorMulDivMod);
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
    setState(388);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__43)
      | (1ULL << LuaParser::T__44)
      | (1ULL << LuaParser::T__45)
      | (1ULL << LuaParser::T__46))) != 0))) {
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
  enterRule(_localctx, 60, LuaParser::RuleOperatorBitwise);
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
    setState(390);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__47)
      | (1ULL << LuaParser::T__48)
      | (1ULL << LuaParser::T__49)
      | (1ULL << LuaParser::T__50)
      | (1ULL << LuaParser::T__51))) != 0))) {
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
  enterRule(_localctx, 62, LuaParser::RuleOperatorUnary);
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
    setState(392);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__42)
      | (1ULL << LuaParser::T__49)
      | (1ULL << LuaParser::T__52)
      | (1ULL << LuaParser::T__53))) != 0))) {
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
  enterRule(_localctx, 64, LuaParser::RuleOperatorPower);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    match(LuaParser::T__54);
   
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
  enterRule(_localctx, 66, LuaParser::RuleNumber);
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
    setState(396);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::INT)
      | (1ULL << LuaParser::HEX)
      | (1ULL << LuaParser::FLOAT)
      | (1ULL << LuaParser::HEX_FLOAT))) != 0))) {
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
  enterRule(_localctx, 68, LuaParser::RuleString);
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
    setState(398);
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
    case 9: return expSempred(dynamic_cast<ExpContext *>(context), predicateIndex);

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

// Static vars and initialization.
std::vector<dfa::DFA> LuaParser::_decisionToDFA;
atn::PredictionContextCache LuaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LuaParser::_atn;
std::vector<uint16_t> LuaParser::_serializedATN;

std::vector<std::string> LuaParser::_ruleNames = {
  "chunk", "block", "stat", "retstat", "label", "funcname", "varlist", "namelist", 
  "explist", "exp", "prefixexp", "functioncall", "varOrExp", "var", "varSuffix", 
  "nameAndArgs", "args", "functiondef", "funcbody", "parlist", "tableconstructor", 
  "fieldlist", "field", "fieldsep", "operatorOr", "operatorAnd", "operatorComparison", 
  "operatorStrcat", "operatorAddSub", "operatorMulDivMod", "operatorBitwise", 
  "operatorUnary", "operatorPower", "number", "string"
};

std::vector<std::string> LuaParser::_literalNames = {
  "", "';'", "'='", "'break'", "'goto'", "'do'", "'end'", "'while'", "'repeat'", 
  "'until'", "'if'", "'then'", "'elseif'", "'else'", "'for'", "','", "'in'", 
  "'function'", "'local'", "'return'", "'::'", "'.'", "':'", "'nil'", "'false'", 
  "'true'", "'...'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'or'", "'and'", 
  "'<'", "'>'", "'<='", "'>='", "'~='", "'=='", "'..'", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "'//'", "'&'", "'|'", "'~'", "'<<'", "'>>'", "'not'", "'#'", 
  "'^'"
};

std::vector<std::string> LuaParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "NAME", "NORMALSTRING", "CHARSTRING", "LONGSTRING", "INT", "HEX", 
  "FLOAT", "HEX_FLOAT", "COMMENT", "LINE_COMMENT", "WS", "SHEBANG"
};

dfa::Vocabulary LuaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> LuaParser::_tokenNames;

LuaParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x45, 0x193, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x4d, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
    0x50, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x53, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x77, 0xa, 0x4, 0xc, 
    0x4, 0xe, 0x4, 0x7a, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x7e, 0xa, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x8a, 0xa, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xa4, 0xa, 0x4, 0x5, 0x4, 0xa6, 0xa, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xaa, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0xad, 
    0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x7, 0x7, 0xb6, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xb9, 0xb, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xbd, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0xc2, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xc5, 0xb, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0xca, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 
    0xcd, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xd2, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0xd5, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xe4, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x106, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x109, 
    0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x10d, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0x110, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0x114, 0xa, 0xd, 
    0xd, 0xd, 0xe, 0xd, 0x115, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0x11d, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x125, 0xa, 0xf, 0x3, 0xf, 0x7, 0xf, 0x128, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x12b, 0xb, 0xf, 0x3, 0x10, 0x7, 0x10, 
    0x12e, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x131, 0xb, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x139, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x13d, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x143, 0xa, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x148, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x14f, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 
    0x15, 0x158, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0x15b, 0xa, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x5, 0x16, 0x15f, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x167, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x16a, 0xb, 0x17, 0x3, 0x17, 0x5, 0x17, 0x16d, 
    0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x179, 
    0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x2, 0x3, 0x14, 0x25, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
    0x44, 0x46, 0x2, 0xa, 0x4, 0x2, 0x3, 0x3, 0x11, 0x11, 0x3, 0x2, 0x25, 
    0x2a, 0x3, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2e, 0x31, 0x3, 0x2, 0x32, 0x36, 
    0x5, 0x2, 0x2d, 0x2d, 0x34, 0x34, 0x37, 0x38, 0x3, 0x2, 0x3e, 0x41, 
    0x3, 0x2, 0x3b, 0x3d, 0x2, 0x1ae, 0x2, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x6, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x8, 0xa7, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xae, 0x3, 0x2, 0x2, 0x2, 0xc, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x10, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xce, 0x3, 0x2, 0x2, 0x2, 0x14, 0xe3, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x18, 0x111, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x124, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x12f, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x22, 0x147, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x149, 0x3, 0x2, 0x2, 0x2, 0x26, 0x14c, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x162, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x178, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x32, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x17e, 0x3, 0x2, 0x2, 0x2, 0x36, 0x180, 0x3, 0x2, 0x2, 0x2, 0x38, 0x182, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x184, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x186, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x188, 0x3, 0x2, 0x2, 0x2, 0x40, 0x18a, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x44, 0x18e, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x190, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x5, 0x4, 0x3, 0x2, 
    0x49, 0x4a, 0x7, 0x2, 0x2, 0x3, 0x4a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x4b, 
    0x4d, 0x5, 0x6, 0x4, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x53, 0x5, 0x8, 0x5, 0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0xa6, 0x7, 0x3, 0x2, 0x2, 0x55, 0x56, 0x5, 0xe, 0x8, 0x2, 0x56, 
    0x57, 0x7, 0x4, 0x2, 0x2, 0x57, 0x58, 0x5, 0x12, 0xa, 0x2, 0x58, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0xa6, 0x5, 0x18, 0xd, 0x2, 0x5a, 0xa6, 0x5, 
    0xa, 0x6, 0x2, 0x5b, 0xa6, 0x7, 0x5, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x6, 
    0x2, 0x2, 0x5d, 0xa6, 0x7, 0x3a, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x7, 0x2, 
    0x2, 0x5f, 0x60, 0x5, 0x4, 0x3, 0x2, 0x60, 0x61, 0x7, 0x8, 0x2, 0x2, 
    0x61, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x9, 0x2, 0x2, 0x63, 
    0x64, 0x5, 0x14, 0xb, 0x2, 0x64, 0x65, 0x7, 0x7, 0x2, 0x2, 0x65, 0x66, 
    0x5, 0x4, 0x3, 0x2, 0x66, 0x67, 0x7, 0x8, 0x2, 0x2, 0x67, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0xa, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x4, 
    0x3, 0x2, 0x6a, 0x6b, 0x7, 0xb, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x14, 0xb, 
    0x2, 0x6c, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0xc, 0x2, 0x2, 
    0x6e, 0x6f, 0x5, 0x14, 0xb, 0x2, 0x6f, 0x70, 0x7, 0xd, 0x2, 0x2, 0x70, 
    0x78, 0x5, 0x4, 0x3, 0x2, 0x71, 0x72, 0x7, 0xe, 0x2, 0x2, 0x72, 0x73, 
    0x5, 0x14, 0xb, 0x2, 0x73, 0x74, 0x7, 0xd, 0x2, 0x2, 0x74, 0x75, 0x5, 
    0x4, 0x3, 0x2, 0x75, 0x77, 0x3, 0x2, 0x2, 0x2, 0x76, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0xf, 0x2, 0x2, 0x7c, 
    0x7e, 0x5, 0x4, 0x3, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 
    0x8, 0x2, 0x2, 0x80, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x10, 
    0x2, 0x2, 0x82, 0x83, 0x7, 0x3a, 0x2, 0x2, 0x83, 0x84, 0x7, 0x4, 0x2, 
    0x2, 0x84, 0x85, 0x5, 0x14, 0xb, 0x2, 0x85, 0x86, 0x7, 0x11, 0x2, 0x2, 
    0x86, 0x89, 0x5, 0x14, 0xb, 0x2, 0x87, 0x88, 0x7, 0x11, 0x2, 0x2, 0x88, 
    0x8a, 0x5, 0x14, 0xb, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 
    0x7, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x4, 0x3, 0x2, 0x8d, 0x8e, 0x7, 0x8, 
    0x2, 0x2, 0x8e, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x10, 0x2, 
    0x2, 0x90, 0x91, 0x5, 0x10, 0x9, 0x2, 0x91, 0x92, 0x7, 0x12, 0x2, 0x2, 
    0x92, 0x93, 0x5, 0x12, 0xa, 0x2, 0x93, 0x94, 0x7, 0x7, 0x2, 0x2, 0x94, 
    0x95, 0x5, 0x4, 0x3, 0x2, 0x95, 0x96, 0x7, 0x8, 0x2, 0x2, 0x96, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 0x13, 0x2, 0x2, 0x98, 0x99, 0x5, 
    0xc, 0x7, 0x2, 0x99, 0x9a, 0x5, 0x26, 0x14, 0x2, 0x9a, 0xa6, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x9c, 0x7, 0x14, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x13, 0x2, 
    0x2, 0x9d, 0x9e, 0x7, 0x3a, 0x2, 0x2, 0x9e, 0xa6, 0x5, 0x26, 0x14, 0x2, 
    0x9f, 0xa0, 0x7, 0x14, 0x2, 0x2, 0xa0, 0xa3, 0x5, 0x10, 0x9, 0x2, 0xa1, 
    0xa2, 0x7, 0x4, 0x2, 0x2, 0xa2, 0xa4, 0x5, 0x12, 0xa, 0x2, 0xa3, 0xa1, 
    0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0x54, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0x59, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x5a, 0x3, 0x2, 0x2, 
    0x2, 0xa5, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0x5e, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x62, 0x3, 0x2, 0x2, 0x2, 0xa5, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x6d, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0xa5, 0x8f, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0x7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa9, 0x7, 0x15, 0x2, 
    0x2, 0xa8, 0xaa, 0x5, 0x12, 0xa, 0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xad, 0x7, 0x3, 0x2, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0x9, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x7, 
    0x16, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x3a, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0x16, 
    0x2, 0x2, 0xb1, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb7, 0x7, 0x3a, 0x2, 
    0x2, 0xb3, 0xb4, 0x7, 0x17, 0x2, 0x2, 0xb4, 0xb6, 0x7, 0x3a, 0x2, 0x2, 
    0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 
    0x18, 0x2, 0x2, 0xbb, 0xbd, 0x7, 0x3a, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 
    0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xc3, 0x5, 0x1c, 0xf, 0x2, 0xbf, 0xc0, 0x7, 0x11, 0x2, 0x2, 
    0xc0, 0xc2, 0x5, 0x1c, 0xf, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xf, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xcb, 0x7, 0x3a, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x11, 
    0x2, 0x2, 0xc8, 0xca, 0x7, 0x3a, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xca, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x11, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd3, 0x5, 0x14, 0xb, 0x2, 0xcf, 0xd0, 
    0x7, 0x11, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x14, 0xb, 0x2, 0xd1, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x8, 0xb, 0x1, 0x2, 
    0xd7, 0xe4, 0x7, 0x19, 0x2, 0x2, 0xd8, 0xe4, 0x7, 0x1a, 0x2, 0x2, 0xd9, 
    0xe4, 0x7, 0x1b, 0x2, 0x2, 0xda, 0xe4, 0x5, 0x44, 0x23, 0x2, 0xdb, 0xe4, 
    0x5, 0x46, 0x24, 0x2, 0xdc, 0xe4, 0x7, 0x1c, 0x2, 0x2, 0xdd, 0xe4, 0x5, 
    0x24, 0x13, 0x2, 0xde, 0xe4, 0x5, 0x16, 0xc, 0x2, 0xdf, 0xe4, 0x5, 0x2a, 
    0x16, 0x2, 0xe0, 0xe1, 0x5, 0x40, 0x21, 0x2, 0xe1, 0xe2, 0x5, 0x14, 
    0xb, 0xa, 0xe2, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xd9, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xda, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0xdc, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xe4, 0x107, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0xc, 0xb, 
    0x2, 0x2, 0xe6, 0xe7, 0x5, 0x42, 0x22, 0x2, 0xe7, 0xe8, 0x5, 0x14, 0xb, 
    0xb, 0xe8, 0x106, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0xc, 0x9, 0x2, 0x2, 
    0xea, 0xeb, 0x5, 0x3c, 0x1f, 0x2, 0xeb, 0xec, 0x5, 0x14, 0xb, 0xa, 0xec, 
    0x106, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0xc, 0x8, 0x2, 0x2, 0xee, 0xef, 
    0x5, 0x3a, 0x1e, 0x2, 0xef, 0xf0, 0x5, 0x14, 0xb, 0x9, 0xf0, 0x106, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0xc, 0x7, 0x2, 0x2, 0xf2, 0xf3, 0x5, 
    0x38, 0x1d, 0x2, 0xf3, 0xf4, 0x5, 0x14, 0xb, 0x7, 0xf4, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0xf5, 0xf6, 0xc, 0x6, 0x2, 0x2, 0xf6, 0xf7, 0x5, 0x36, 
    0x1c, 0x2, 0xf7, 0xf8, 0x5, 0x14, 0xb, 0x7, 0xf8, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xfa, 0xc, 0x5, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x34, 0x1b, 0x2, 
    0xfb, 0xfc, 0x5, 0x14, 0xb, 0x6, 0xfc, 0x106, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xfe, 0xc, 0x4, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x32, 0x1a, 0x2, 0xff, 0x100, 
    0x5, 0x14, 0xb, 0x5, 0x100, 0x106, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 
    0xc, 0x3, 0x2, 0x2, 0x102, 0x103, 0x5, 0x3e, 0x20, 0x2, 0x103, 0x104, 
    0x5, 0x14, 0xb, 0x4, 0x104, 0x106, 0x3, 0x2, 0x2, 0x2, 0x105, 0xe5, 
    0x3, 0x2, 0x2, 0x2, 0x105, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x105, 0xed, 0x3, 
    0x2, 0x2, 0x2, 0x105, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x105, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0x105, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x105, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0x105, 0x101, 0x3, 0x2, 0x2, 0x2, 0x106, 0x109, 0x3, 0x2, 0x2, 
    0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 
    0x2, 0x108, 0x15, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x10e, 0x5, 0x1a, 0xe, 0x2, 0x10b, 0x10d, 0x5, 0x20, 0x11, 0x2, 
    0x10c, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x113, 0x5, 0x1a, 0xe, 0x2, 0x112, 0x114, 0x5, 0x20, 0x11, 0x2, 0x113, 
    0x112, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11d, 0x5, 0x1c, 0xf, 0x2, 0x118, 
    0x119, 0x7, 0x1d, 0x2, 0x2, 0x119, 0x11a, 0x5, 0x14, 0xb, 0x2, 0x11a, 
    0x11b, 0x7, 0x1e, 0x2, 0x2, 0x11b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11d, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x125, 0x7, 0x3a, 0x2, 0x2, 0x11f, 
    0x120, 0x7, 0x1d, 0x2, 0x2, 0x120, 0x121, 0x5, 0x14, 0xb, 0x2, 0x121, 
    0x122, 0x7, 0x1e, 0x2, 0x2, 0x122, 0x123, 0x5, 0x1e, 0x10, 0x2, 0x123, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x124, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x125, 0x129, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x128, 0x5, 0x1e, 0x10, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 
    0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x12e, 0x5, 0x20, 0x11, 0x2, 0x12d, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x131, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x138, 
    0x3, 0x2, 0x2, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 
    0x7, 0x1f, 0x2, 0x2, 0x133, 0x134, 0x5, 0x14, 0xb, 0x2, 0x134, 0x135, 
    0x7, 0x20, 0x2, 0x2, 0x135, 0x139, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 
    0x7, 0x17, 0x2, 0x2, 0x137, 0x139, 0x7, 0x3a, 0x2, 0x2, 0x138, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x139, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x18, 0x2, 0x2, 0x13b, 0x13d, 0x7, 
    0x3a, 0x2, 0x2, 0x13c, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 
    0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x5, 
    0x22, 0x12, 0x2, 0x13f, 0x21, 0x3, 0x2, 0x2, 0x2, 0x140, 0x142, 0x7, 
    0x1d, 0x2, 0x2, 0x141, 0x143, 0x5, 0x12, 0xa, 0x2, 0x142, 0x141, 0x3, 
    0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x3, 
    0x2, 0x2, 0x2, 0x144, 0x148, 0x7, 0x1e, 0x2, 0x2, 0x145, 0x148, 0x5, 
    0x2a, 0x16, 0x2, 0x146, 0x148, 0x5, 0x46, 0x24, 0x2, 0x147, 0x140, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x146, 0x3, 
    0x2, 0x2, 0x2, 0x148, 0x23, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x13, 
    0x2, 0x2, 0x14a, 0x14b, 0x5, 0x26, 0x14, 0x2, 0x14b, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x14c, 0x14e, 0x7, 0x1d, 0x2, 0x2, 0x14d, 0x14f, 0x5, 0x28, 
    0x15, 0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x7, 0x1e, 
    0x2, 0x2, 0x151, 0x152, 0x5, 0x4, 0x3, 0x2, 0x152, 0x153, 0x7, 0x8, 
    0x2, 0x2, 0x153, 0x27, 0x3, 0x2, 0x2, 0x2, 0x154, 0x157, 0x5, 0x10, 
    0x9, 0x2, 0x155, 0x156, 0x7, 0x11, 0x2, 0x2, 0x156, 0x158, 0x7, 0x1c, 
    0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 
    0x2, 0x2, 0x158, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15b, 0x7, 0x1c, 
    0x2, 0x2, 0x15a, 0x154, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x159, 0x3, 0x2, 
    0x2, 0x2, 0x15b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15e, 0x7, 0x21, 
    0x2, 0x2, 0x15d, 0x15f, 0x5, 0x2c, 0x17, 0x2, 0x15e, 0x15d, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x161, 0x7, 0x22, 0x2, 0x2, 0x161, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x168, 0x5, 0x2e, 0x18, 0x2, 0x163, 0x164, 0x5, 0x30, 
    0x19, 0x2, 0x164, 0x165, 0x5, 0x2e, 0x18, 0x2, 0x165, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x163, 0x3, 0x2, 0x2, 0x2, 0x167, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x168, 0x3, 0x2, 
    0x2, 0x2, 0x16b, 0x16d, 0x5, 0x30, 0x19, 0x2, 0x16c, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x16f, 0x7, 0x1f, 0x2, 0x2, 0x16f, 0x170, 0x5, 0x14, 0xb, 
    0x2, 0x170, 0x171, 0x7, 0x20, 0x2, 0x2, 0x171, 0x172, 0x7, 0x4, 0x2, 
    0x2, 0x172, 0x173, 0x5, 0x14, 0xb, 0x2, 0x173, 0x179, 0x3, 0x2, 0x2, 
    0x2, 0x174, 0x175, 0x7, 0x3a, 0x2, 0x2, 0x175, 0x176, 0x7, 0x4, 0x2, 
    0x2, 0x176, 0x179, 0x5, 0x14, 0xb, 0x2, 0x177, 0x179, 0x5, 0x14, 0xb, 
    0x2, 0x178, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x178, 0x174, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x177, 0x3, 0x2, 0x2, 0x2, 0x179, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x17a, 0x17b, 0x9, 0x2, 0x2, 0x2, 0x17b, 0x31, 0x3, 0x2, 0x2, 0x2, 0x17c, 
    0x17d, 0x7, 0x23, 0x2, 0x2, 0x17d, 0x33, 0x3, 0x2, 0x2, 0x2, 0x17e, 
    0x17f, 0x7, 0x24, 0x2, 0x2, 0x17f, 0x35, 0x3, 0x2, 0x2, 0x2, 0x180, 
    0x181, 0x9, 0x3, 0x2, 0x2, 0x181, 0x37, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 
    0x7, 0x2b, 0x2, 0x2, 0x183, 0x39, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 
    0x9, 0x4, 0x2, 0x2, 0x185, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x9, 
    0x5, 0x2, 0x2, 0x187, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x9, 0x6, 
    0x2, 0x2, 0x189, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x9, 0x7, 0x2, 
    0x2, 0x18b, 0x41, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x7, 0x39, 0x2, 
    0x2, 0x18d, 0x43, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x9, 0x8, 0x2, 0x2, 
    0x18f, 0x45, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x9, 0x9, 0x2, 0x2, 0x191, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x24, 0x4e, 0x52, 0x78, 0x7d, 0x89, 0xa3, 
    0xa5, 0xa9, 0xac, 0xb7, 0xbc, 0xc3, 0xcb, 0xd3, 0xe3, 0x105, 0x107, 
    0x10e, 0x115, 0x11c, 0x124, 0x129, 0x12f, 0x138, 0x13c, 0x142, 0x147, 
    0x14e, 0x157, 0x15a, 0x15e, 0x168, 0x16c, 0x178, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

LuaParser::Initializer LuaParser::_init;

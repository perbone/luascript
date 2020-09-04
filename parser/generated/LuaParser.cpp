
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

  auto onExit = finally([=] {
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
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
      | (1ULL << LuaParser::T__21)
      | (1ULL << LuaParser::T__28)
      | (1ULL << LuaParser::NAME))) != 0)) {
      setState(77);
      stat();
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__20) {
      setState(83);
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

LuaParser::VarlistContext* LuaParser::StatContext::varlist() {
  return getRuleContext<LuaParser::VarlistContext>(0);
}

LuaParser::ExplistContext* LuaParser::StatContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

LuaParser::FunctioncallContext* LuaParser::StatContext::functioncall() {
  return getRuleContext<LuaParser::FunctioncallContext>(0);
}

LuaParser::LabelContext* LuaParser::StatContext::label() {
  return getRuleContext<LuaParser::LabelContext>(0);
}

tree::TerminalNode* LuaParser::StatContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

std::vector<LuaParser::BlockContext *> LuaParser::StatContext::block() {
  return getRuleContexts<LuaParser::BlockContext>();
}

LuaParser::BlockContext* LuaParser::StatContext::block(size_t i) {
  return getRuleContext<LuaParser::BlockContext>(i);
}

std::vector<LuaParser::ExpContext *> LuaParser::StatContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::StatContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::NamelistContext* LuaParser::StatContext::namelist() {
  return getRuleContext<LuaParser::NamelistContext>(0);
}

LuaParser::FuncnameContext* LuaParser::StatContext::funcname() {
  return getRuleContext<LuaParser::FuncnameContext>(0);
}

LuaParser::FuncbodyContext* LuaParser::StatContext::funcbody() {
  return getRuleContext<LuaParser::FuncbodyContext>(0);
}

LuaParser::AttnamelistContext* LuaParser::StatContext::attnamelist() {
  return getRuleContext<LuaParser::AttnamelistContext>(0);
}


size_t LuaParser::StatContext::getRuleIndex() const {
  return LuaParser::RuleStat;
}

void LuaParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void LuaParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}

LuaParser::StatContext* LuaParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 4, LuaParser::RuleStat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(86);
      match(LuaParser::T__0);
      break;
    }

    case 2: {
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
      enterOuterAlt(_localctx, 3);
      setState(91);
      functioncall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(92);
      label();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(93);
      match(LuaParser::T__2);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(94);
      match(LuaParser::T__3);
      setState(95);
      match(LuaParser::NAME);
      break;
    }

    case 7: {
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

  auto onExit = finally([=] {
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

  auto onExit = finally([=] {
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

//----------------- RetstatContext ------------------------------------------------------------------

LuaParser::RetstatContext::RetstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::ExplistContext* LuaParser::RetstatContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}


size_t LuaParser::RetstatContext::getRuleIndex() const {
  return LuaParser::RuleRetstat;
}

void LuaParser::RetstatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRetstat(this);
}

void LuaParser::RetstatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRetstat(this);
}

LuaParser::RetstatContext* LuaParser::retstat() {
  RetstatContext *_localctx = _tracker.createInstance<RetstatContext>(_ctx, getState());
  enterRule(_localctx, 10, LuaParser::RuleRetstat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(LuaParser::T__20);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__16)
      | (1ULL << LuaParser::T__24)
      | (1ULL << LuaParser::T__25)
      | (1ULL << LuaParser::T__26)
      | (1ULL << LuaParser::T__27)
      | (1ULL << LuaParser::T__28)
      | (1ULL << LuaParser::T__32)
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
      setState(185);
      explist();
    }
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__0) {
      setState(188);
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
  enterRule(_localctx, 12, LuaParser::RuleLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(LuaParser::T__21);
    setState(192);
    match(LuaParser::NAME);
    setState(193);
    match(LuaParser::T__21);
   
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(LuaParser::NAME);
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__22) {
      setState(196);
      match(LuaParser::T__22);
      setState(197);
      match(LuaParser::NAME);
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__23) {
      setState(203);
      match(LuaParser::T__23);
      setState(204);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    var();
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__14) {
      setState(208);
      match(LuaParser::T__14);
      setState(209);
      var();
      setState(214);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(LuaParser::NAME);
    setState(220);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(216);
        match(LuaParser::T__14);
        setState(217);
        match(LuaParser::NAME); 
      }
      setState(222);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    exp(0);
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__14) {
      setState(224);
      match(LuaParser::T__14);
      setState(225);
      exp(0);
      setState(230);
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

LuaParser::NumberContext* LuaParser::ExpContext::number() {
  return getRuleContext<LuaParser::NumberContext>(0);
}

LuaParser::StringContext* LuaParser::ExpContext::string() {
  return getRuleContext<LuaParser::StringContext>(0);
}

LuaParser::FunctiondefContext* LuaParser::ExpContext::functiondef() {
  return getRuleContext<LuaParser::FunctiondefContext>(0);
}

LuaParser::PrefixexpContext* LuaParser::ExpContext::prefixexp() {
  return getRuleContext<LuaParser::PrefixexpContext>(0);
}

LuaParser::TableconstructorContext* LuaParser::ExpContext::tableconstructor() {
  return getRuleContext<LuaParser::TableconstructorContext>(0);
}

LuaParser::OperatorUnaryContext* LuaParser::ExpContext::operatorUnary() {
  return getRuleContext<LuaParser::OperatorUnaryContext>(0);
}

std::vector<LuaParser::ExpContext *> LuaParser::ExpContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorPowerContext* LuaParser::ExpContext::operatorPower() {
  return getRuleContext<LuaParser::OperatorPowerContext>(0);
}

LuaParser::OperatorMulDivModContext* LuaParser::ExpContext::operatorMulDivMod() {
  return getRuleContext<LuaParser::OperatorMulDivModContext>(0);
}

LuaParser::OperatorAddSubContext* LuaParser::ExpContext::operatorAddSub() {
  return getRuleContext<LuaParser::OperatorAddSubContext>(0);
}

LuaParser::OperatorStrcatContext* LuaParser::ExpContext::operatorStrcat() {
  return getRuleContext<LuaParser::OperatorStrcatContext>(0);
}

LuaParser::OperatorComparisonContext* LuaParser::ExpContext::operatorComparison() {
  return getRuleContext<LuaParser::OperatorComparisonContext>(0);
}

LuaParser::OperatorAndContext* LuaParser::ExpContext::operatorAnd() {
  return getRuleContext<LuaParser::OperatorAndContext>(0);
}

LuaParser::OperatorOrContext* LuaParser::ExpContext::operatorOr() {
  return getRuleContext<LuaParser::OperatorOrContext>(0);
}

LuaParser::OperatorBitwiseContext* LuaParser::ExpContext::operatorBitwise() {
  return getRuleContext<LuaParser::OperatorBitwiseContext>(0);
}


size_t LuaParser::ExpContext::getRuleIndex() const {
  return LuaParser::RuleExp;
}

void LuaParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void LuaParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LuaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
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

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(244);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__24: {
        setState(232);
        match(LuaParser::T__24);
        break;
      }

      case LuaParser::T__25: {
        setState(233);
        match(LuaParser::T__25);
        break;
      }

      case LuaParser::T__26: {
        setState(234);
        match(LuaParser::T__26);
        break;
      }

      case LuaParser::INT:
      case LuaParser::HEX:
      case LuaParser::FLOAT:
      case LuaParser::HEX_FLOAT: {
        setState(235);
        number();
        break;
      }

      case LuaParser::NORMALSTRING:
      case LuaParser::CHARSTRING:
      case LuaParser::LONGSTRING: {
        setState(236);
        string();
        break;
      }

      case LuaParser::T__27: {
        setState(237);
        match(LuaParser::T__27);
        break;
      }

      case LuaParser::T__16: {
        setState(238);
        functiondef();
        break;
      }

      case LuaParser::T__28:
      case LuaParser::NAME: {
        setState(239);
        prefixexp();
        break;
      }

      case LuaParser::T__32: {
        setState(240);
        tableconstructor();
        break;
      }

      case LuaParser::T__42:
      case LuaParser::T__49:
      case LuaParser::T__52:
      case LuaParser::T__53: {
        setState(241);
        operatorUnary();
        setState(242);
        exp(8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(280);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(278);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(246);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(247);
          operatorPower();
          setState(248);
          exp(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(250);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(251);
          operatorMulDivMod();
          setState(252);
          exp(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(254);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(255);
          operatorAddSub();
          setState(256);
          exp(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(258);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(259);
          operatorStrcat();
          setState(260);
          exp(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(262);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(263);
          operatorComparison();
          setState(264);
          exp(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(266);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(267);
          operatorAnd();
          setState(268);
          exp(4);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(270);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(271);
          operatorOr();
          setState(272);
          exp(3);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(274);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(275);
          operatorBitwise();
          setState(276);
          exp(2);
          break;
        }

        } 
      }
      setState(282);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(283);
    varOrExp();
    setState(287);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(284);
        nameAndArgs(); 
      }
      setState(289);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(290);
    varOrExp();
    setState(292); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(291);
              nameAndArgs();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(294); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(301);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(296);
      var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(297);
      match(LuaParser::T__28);
      setState(298);
      exp(0);
      setState(299);
      match(LuaParser::T__29);
      break;
    }

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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(309);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::NAME: {
        setState(303);
        match(LuaParser::NAME);
        break;
      }

      case LuaParser::T__28: {
        setState(304);
        match(LuaParser::T__28);
        setState(305);
        exp(0);
        setState(306);
        match(LuaParser::T__29);
        setState(307);
        varSuffix();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(314);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(311);
        varSuffix(); 
      }
      setState(316);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__23)
      | (1ULL << LuaParser::T__28)
      | (1ULL << LuaParser::T__32)
      | (1ULL << LuaParser::NORMALSTRING)
      | (1ULL << LuaParser::CHARSTRING)
      | (1ULL << LuaParser::LONGSTRING))) != 0)) {
      setState(317);
      nameAndArgs();
      setState(322);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(329);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__30: {
        setState(323);
        match(LuaParser::T__30);
        setState(324);
        exp(0);
        setState(325);
        match(LuaParser::T__31);
        break;
      }

      case LuaParser::T__22: {
        setState(327);
        match(LuaParser::T__22);
        setState(328);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__23) {
      setState(331);
      match(LuaParser::T__23);
      setState(332);
      match(LuaParser::NAME);
    }
    setState(335);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(344);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__28: {
        enterOuterAlt(_localctx, 1);
        setState(337);
        match(LuaParser::T__28);
        setState(339);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << LuaParser::T__16)
          | (1ULL << LuaParser::T__24)
          | (1ULL << LuaParser::T__25)
          | (1ULL << LuaParser::T__26)
          | (1ULL << LuaParser::T__27)
          | (1ULL << LuaParser::T__28)
          | (1ULL << LuaParser::T__32)
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
          setState(338);
          explist();
        }
        setState(341);
        match(LuaParser::T__29);
        break;
      }

      case LuaParser::T__32: {
        enterOuterAlt(_localctx, 2);
        setState(342);
        tableconstructor();
        break;
      }

      case LuaParser::NORMALSTRING:
      case LuaParser::CHARSTRING:
      case LuaParser::LONGSTRING: {
        enterOuterAlt(_localctx, 3);
        setState(343);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(LuaParser::T__16);
    setState(347);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    match(LuaParser::T__28);
    setState(351);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__27

    || _la == LuaParser::NAME) {
      setState(350);
      parlist();
    }
    setState(353);
    match(LuaParser::T__29);
    setState(354);
    block();
    setState(355);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(363);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(357);
        namelist();
        setState(360);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LuaParser::T__14) {
          setState(358);
          match(LuaParser::T__14);
          setState(359);
          match(LuaParser::T__27);
        }
        break;
      }

      case LuaParser::T__27: {
        enterOuterAlt(_localctx, 2);
        setState(362);
        match(LuaParser::T__27);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    match(LuaParser::T__32);
    setState(367);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__16)
      | (1ULL << LuaParser::T__24)
      | (1ULL << LuaParser::T__25)
      | (1ULL << LuaParser::T__26)
      | (1ULL << LuaParser::T__27)
      | (1ULL << LuaParser::T__28)
      | (1ULL << LuaParser::T__30)
      | (1ULL << LuaParser::T__32)
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
      setState(366);
      fieldlist();
    }
    setState(369);
    match(LuaParser::T__33);
   
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(371);
    field();
    setState(377);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(372);
        fieldsep();
        setState(373);
        field(); 
      }
      setState(379);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
    setState(381);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__0

    || _la == LuaParser::T__14) {
      setState(380);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(393);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(383);
      match(LuaParser::T__30);
      setState(384);
      exp(0);
      setState(385);
      match(LuaParser::T__31);
      setState(386);
      match(LuaParser::T__1);
      setState(387);
      exp(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(389);
      match(LuaParser::NAME);
      setState(390);
      match(LuaParser::T__1);
      setState(391);
      exp(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(392);
      exp(0);
      break;
    }

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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(395);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    match(LuaParser::T__34);
   
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    match(LuaParser::T__35);
   
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LuaParser::T__18)
      | (1ULL << LuaParser::T__19)
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
  enterRule(_localctx, 58, LuaParser::RuleOperatorStrcat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
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
  enterRule(_localctx, 60, LuaParser::RuleOperatorAddSub);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
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
  enterRule(_localctx, 62, LuaParser::RuleOperatorMulDivMod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(407);
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
  enterRule(_localctx, 64, LuaParser::RuleOperatorBitwise);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
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
  enterRule(_localctx, 66, LuaParser::RuleOperatorUnary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
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
  enterRule(_localctx, 68, LuaParser::RuleOperatorPower);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
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
  enterRule(_localctx, 70, LuaParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(415);
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
  enterRule(_localctx, 72, LuaParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
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
    case 11: return expSempred(dynamic_cast<ExpContext *>(context), predicateIndex);

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
  "chunk", "block", "stat", "attnamelist", "attrib", "retstat", "label", 
  "funcname", "varlist", "namelist", "explist", "exp", "prefixexp", "functioncall", 
  "varOrExp", "var", "varSuffix", "nameAndArgs", "args", "functiondef", 
  "funcbody", "parlist", "tableconstructor", "fieldlist", "field", "fieldsep", 
  "operatorOr", "operatorAnd", "operatorComparison", "operatorStrcat", "operatorAddSub", 
  "operatorMulDivMod", "operatorBitwise", "operatorUnary", "operatorPower", 
  "number", "string"
};

std::vector<std::string> LuaParser::_literalNames = {
  "", "';'", "'='", "'break'", "'goto'", "'do'", "'end'", "'while'", "'repeat'", 
  "'until'", "'if'", "'then'", "'elseif'", "'else'", "'for'", "','", "'in'", 
  "'function'", "'local'", "'<'", "'>'", "'return'", "'::'", "'.'", "':'", 
  "'nil'", "'false'", "'true'", "'...'", "'('", "')'", "'['", "']'", "'{'", 
  "'}'", "'or'", "'and'", "'<='", "'>='", "'~='", "'=='", "'..'", "'+'", 
  "'-'", "'*'", "'/'", "'%'", "'//'", "'&'", "'|'", "'~'", "'<<'", "'>>'", 
  "'not'", "'#'", "'^'"
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
    0x3, 0x45, 0x1a6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x7, 0x3, 0x51, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x54, 0xb, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x57, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x7b, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x7e, 0xb, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x82, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x8e, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0xa8, 0xa, 0x4, 0x5, 0x4, 0xaa, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xb1, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0xb4, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xb9, 0xa, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xbd, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0xc0, 
    0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0xc9, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0xcc, 0xb, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xd0, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x7, 0xa, 0xd5, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xd8, 0xb, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xdd, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0xe0, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xe5, 0xa, 0xc, 
    0xc, 0xc, 0xe, 0xc, 0xe8, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xf7, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x119, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x11c, 
    0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x120, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x123, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x6, 0xf, 0x127, 0xa, 0xf, 
    0xd, 0xf, 0xe, 0xf, 0x128, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0x130, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x138, 0xa, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0x13b, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x13e, 0xb, 0x11, 
    0x3, 0x12, 0x7, 0x12, 0x141, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x144, 
    0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0x14c, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x150, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
    0x156, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x15b, 
    0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 
    0x16, 0x162, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x16b, 0xa, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x16e, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x172, 
    0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x7, 0x19, 0x17a, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x17d, 0xb, 
    0x19, 0x3, 0x19, 0x5, 0x19, 0x180, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x18c, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x2, 0x3, 0x18, 0x27, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x2, 0xa, 
    0x4, 0x2, 0x3, 0x3, 0x11, 0x11, 0x4, 0x2, 0x15, 0x16, 0x27, 0x2a, 0x3, 
    0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2e, 0x31, 0x3, 0x2, 0x32, 0x36, 0x5, 0x2, 
    0x2d, 0x2d, 0x34, 0x34, 0x37, 0x38, 0x3, 0x2, 0x3e, 0x41, 0x3, 0x2, 
    0x3b, 0x3d, 0x2, 0x1c1, 0x2, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x8, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0x10, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x12, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x16, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x124, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x12f, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x137, 0x3, 0x2, 0x2, 0x2, 0x22, 0x142, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x26, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x15c, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x16d, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x30, 0x175, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x34, 0x18d, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x38, 0x191, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x193, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x195, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x197, 0x3, 0x2, 0x2, 0x2, 0x40, 0x199, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x19b, 0x3, 0x2, 0x2, 0x2, 0x44, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x46, 0x19f, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1a3, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x4d, 0x5, 0x4, 0x3, 0x2, 0x4d, 0x4e, 0x7, 0x2, 
    0x2, 0x3, 0x4e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x51, 0x5, 0x6, 0x4, 
    0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x57, 
    0x5, 0xc, 0x7, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x5, 0x3, 0x2, 0x2, 0x2, 0x58, 0xaa, 0x7, 0x3, 
    0x2, 0x2, 0x59, 0x5a, 0x5, 0x12, 0xa, 0x2, 0x5a, 0x5b, 0x7, 0x4, 0x2, 
    0x2, 0x5b, 0x5c, 0x5, 0x16, 0xc, 0x2, 0x5c, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0xaa, 0x5, 0x1c, 0xf, 0x2, 0x5e, 0xaa, 0x5, 0xe, 0x8, 0x2, 0x5f, 
    0xaa, 0x7, 0x5, 0x2, 0x2, 0x60, 0x61, 0x7, 0x6, 0x2, 0x2, 0x61, 0xaa, 
    0x7, 0x3a, 0x2, 0x2, 0x62, 0x63, 0x7, 0x7, 0x2, 0x2, 0x63, 0x64, 0x5, 
    0x4, 0x3, 0x2, 0x64, 0x65, 0x7, 0x8, 0x2, 0x2, 0x65, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x67, 0x7, 0x9, 0x2, 0x2, 0x67, 0x68, 0x5, 0x18, 0xd, 
    0x2, 0x68, 0x69, 0x7, 0x7, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x4, 0x3, 0x2, 
    0x6a, 0x6b, 0x7, 0x8, 0x2, 0x2, 0x6b, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x6d, 0x7, 0xa, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x4, 0x3, 0x2, 0x6e, 0x6f, 
    0x7, 0xb, 0x2, 0x2, 0x6f, 0x70, 0x5, 0x18, 0xd, 0x2, 0x70, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0xc, 0x2, 0x2, 0x72, 0x73, 0x5, 0x18, 
    0xd, 0x2, 0x73, 0x74, 0x7, 0xd, 0x2, 0x2, 0x74, 0x7c, 0x5, 0x4, 0x3, 
    0x2, 0x75, 0x76, 0x7, 0xe, 0x2, 0x2, 0x76, 0x77, 0x5, 0x18, 0xd, 0x2, 
    0x77, 0x78, 0x7, 0xd, 0x2, 0x2, 0x78, 0x79, 0x5, 0x4, 0x3, 0x2, 0x79, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x75, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x80, 0x7, 0xf, 0x2, 0x2, 0x80, 0x82, 0x5, 0x4, 0x3, 
    0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x8, 0x2, 0x2, 0x84, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x10, 0x2, 0x2, 0x86, 0x87, 
    0x7, 0x3a, 0x2, 0x2, 0x87, 0x88, 0x7, 0x4, 0x2, 0x2, 0x88, 0x89, 0x5, 
    0x18, 0xd, 0x2, 0x89, 0x8a, 0x7, 0x11, 0x2, 0x2, 0x8a, 0x8d, 0x5, 0x18, 
    0xd, 0x2, 0x8b, 0x8c, 0x7, 0x11, 0x2, 0x2, 0x8c, 0x8e, 0x5, 0x18, 0xd, 
    0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x7, 0x2, 0x2, 0x90, 
    0x91, 0x5, 0x4, 0x3, 0x2, 0x91, 0x92, 0x7, 0x8, 0x2, 0x2, 0x92, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0x10, 0x2, 0x2, 0x94, 0x95, 0x5, 
    0x14, 0xb, 0x2, 0x95, 0x96, 0x7, 0x12, 0x2, 0x2, 0x96, 0x97, 0x5, 0x16, 
    0xc, 0x2, 0x97, 0x98, 0x7, 0x7, 0x2, 0x2, 0x98, 0x99, 0x5, 0x4, 0x3, 
    0x2, 0x99, 0x9a, 0x7, 0x8, 0x2, 0x2, 0x9a, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0x9b, 0x9c, 0x7, 0x13, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x10, 0x9, 0x2, 0x9d, 
    0x9e, 0x5, 0x2a, 0x16, 0x2, 0x9e, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 
    0x7, 0x14, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x13, 0x2, 0x2, 0xa1, 0xa2, 0x7, 
    0x3a, 0x2, 0x2, 0xa2, 0xaa, 0x5, 0x2a, 0x16, 0x2, 0xa3, 0xa4, 0x7, 0x14, 
    0x2, 0x2, 0xa4, 0xa7, 0x5, 0x8, 0x5, 0x2, 0xa5, 0xa6, 0x7, 0x4, 0x2, 
    0x2, 0xa6, 0xa8, 0x5, 0x16, 0xc, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x59, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0x5e, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0x60, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0x66, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0x71, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0x93, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x3a, 0x2, 0x2, 0xac, 0xb2, 0x5, 
    0xa, 0x6, 0x2, 0xad, 0xae, 0x7, 0x11, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x3a, 
    0x2, 0x2, 0xaf, 0xb1, 0x5, 0xa, 0x6, 0x2, 0xb0, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x15, 0x2, 0x2, 0xb6, 0xb7, 
    0x7, 0x3a, 0x2, 0x2, 0xb7, 0xb9, 0x7, 0x16, 0x2, 0x2, 0xb8, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0xbc, 0x7, 0x17, 0x2, 0x2, 0xbb, 0xbd, 0x5, 0x16, 0xc, 
    0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc0, 0x7, 0x3, 0x2, 0x2, 0xbf, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x18, 0x2, 0x2, 0xc2, 0xc3, 0x7, 
    0x3a, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x18, 0x2, 0x2, 0xc4, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0xc5, 0xca, 0x7, 0x3a, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x19, 0x2, 
    0x2, 0xc7, 0xc9, 0x7, 0x3a, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x1a, 0x2, 0x2, 0xce, 0xd0, 0x7, 
    0x3a, 0x2, 0x2, 0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0x11, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd6, 0x5, 0x20, 0x11, 
    0x2, 0xd2, 0xd3, 0x7, 0x11, 0x2, 0x2, 0xd3, 0xd5, 0x5, 0x20, 0x11, 0x2, 
    0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd6, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xde, 0x7, 
    0x3a, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x11, 0x2, 0x2, 0xdb, 0xdd, 0x7, 0x3a, 
    0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0xdf, 0x15, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 
    0xe6, 0x5, 0x18, 0xd, 0x2, 0xe2, 0xe3, 0x7, 0x11, 0x2, 0x2, 0xe3, 0xe5, 
    0x5, 0x18, 0xd, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 
    0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 
    0x2, 0x2, 0xe7, 0x17, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 
    0x2, 0xe9, 0xea, 0x8, 0xd, 0x1, 0x2, 0xea, 0xf7, 0x7, 0x1b, 0x2, 0x2, 
    0xeb, 0xf7, 0x7, 0x1c, 0x2, 0x2, 0xec, 0xf7, 0x7, 0x1d, 0x2, 0x2, 0xed, 
    0xf7, 0x5, 0x48, 0x25, 0x2, 0xee, 0xf7, 0x5, 0x4a, 0x26, 0x2, 0xef, 
    0xf7, 0x7, 0x1e, 0x2, 0x2, 0xf0, 0xf7, 0x5, 0x28, 0x15, 0x2, 0xf1, 0xf7, 
    0x5, 0x1a, 0xe, 0x2, 0xf2, 0xf7, 0x5, 0x2e, 0x18, 0x2, 0xf3, 0xf4, 0x5, 
    0x44, 0x23, 0x2, 0xf4, 0xf5, 0x5, 0x18, 0xd, 0xa, 0xf5, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0xf6, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xec, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf7, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xf9, 0xc, 0xb, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x46, 
    0x24, 0x2, 0xfa, 0xfb, 0x5, 0x18, 0xd, 0xb, 0xfb, 0x119, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xfd, 0xc, 0x9, 0x2, 0x2, 0xfd, 0xfe, 0x5, 0x40, 0x21, 0x2, 
    0xfe, 0xff, 0x5, 0x18, 0xd, 0xa, 0xff, 0x119, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x101, 0xc, 0x8, 0x2, 0x2, 0x101, 0x102, 0x5, 0x3e, 0x20, 0x2, 0x102, 
    0x103, 0x5, 0x18, 0xd, 0x9, 0x103, 0x119, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x105, 0xc, 0x7, 0x2, 0x2, 0x105, 0x106, 0x5, 0x3c, 0x1f, 0x2, 0x106, 
    0x107, 0x5, 0x18, 0xd, 0x7, 0x107, 0x119, 0x3, 0x2, 0x2, 0x2, 0x108, 
    0x109, 0xc, 0x6, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x3a, 0x1e, 0x2, 0x10a, 
    0x10b, 0x5, 0x18, 0xd, 0x7, 0x10b, 0x119, 0x3, 0x2, 0x2, 0x2, 0x10c, 
    0x10d, 0xc, 0x5, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x38, 0x1d, 0x2, 0x10e, 
    0x10f, 0x5, 0x18, 0xd, 0x6, 0x10f, 0x119, 0x3, 0x2, 0x2, 0x2, 0x110, 
    0x111, 0xc, 0x4, 0x2, 0x2, 0x111, 0x112, 0x5, 0x36, 0x1c, 0x2, 0x112, 
    0x113, 0x5, 0x18, 0xd, 0x5, 0x113, 0x119, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0x115, 0xc, 0x3, 0x2, 0x2, 0x115, 0x116, 0x5, 0x42, 0x22, 0x2, 0x116, 
    0x117, 0x5, 0x18, 0xd, 0x4, 0x117, 0x119, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0xf8, 0x3, 0x2, 0x2, 0x2, 0x118, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x118, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x104, 0x3, 0x2, 0x2, 0x2, 0x118, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x118, 0x110, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x114, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11c, 
    0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x11b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x121, 0x5, 0x1e, 0x10, 0x2, 0x11e, 0x120, 0x5, 
    0x24, 0x13, 0x2, 0x11f, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x126, 0x5, 0x1e, 0x10, 0x2, 0x125, 0x127, 0x5, 0x24, 
    0x13, 0x2, 0x126, 0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x130, 0x5, 0x20, 
    0x11, 0x2, 0x12b, 0x12c, 0x7, 0x1f, 0x2, 0x2, 0x12c, 0x12d, 0x5, 0x18, 
    0xd, 0x2, 0x12d, 0x12e, 0x7, 0x20, 0x2, 0x2, 0x12e, 0x130, 0x3, 0x2, 
    0x2, 0x2, 0x12f, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x138, 0x7, 0x3a, 
    0x2, 0x2, 0x132, 0x133, 0x7, 0x1f, 0x2, 0x2, 0x133, 0x134, 0x5, 0x18, 
    0xd, 0x2, 0x134, 0x135, 0x7, 0x20, 0x2, 0x2, 0x135, 0x136, 0x5, 0x22, 
    0x12, 0x2, 0x136, 0x138, 0x3, 0x2, 0x2, 0x2, 0x137, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x137, 0x132, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13c, 0x3, 0x2, 
    0x2, 0x2, 0x139, 0x13b, 0x5, 0x22, 0x12, 0x2, 0x13a, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x13b, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x141, 0x5, 0x24, 0x13, 
    0x2, 0x140, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x144, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 
    0x2, 0x143, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 
    0x2, 0x145, 0x146, 0x7, 0x21, 0x2, 0x2, 0x146, 0x147, 0x5, 0x18, 0xd, 
    0x2, 0x147, 0x148, 0x7, 0x22, 0x2, 0x2, 0x148, 0x14c, 0x3, 0x2, 0x2, 
    0x2, 0x149, 0x14a, 0x7, 0x19, 0x2, 0x2, 0x14a, 0x14c, 0x7, 0x3a, 0x2, 
    0x2, 0x14b, 0x145, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x14c, 0x23, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0x1a, 0x2, 
    0x2, 0x14e, 0x150, 0x7, 0x3a, 0x2, 0x2, 0x14f, 0x14d, 0x3, 0x2, 0x2, 
    0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 
    0x2, 0x151, 0x152, 0x5, 0x26, 0x14, 0x2, 0x152, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x153, 0x155, 0x7, 0x1f, 0x2, 0x2, 0x154, 0x156, 0x5, 0x16, 0xc, 
    0x2, 0x155, 0x154, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x15b, 0x7, 0x20, 0x2, 
    0x2, 0x158, 0x15b, 0x5, 0x2e, 0x18, 0x2, 0x159, 0x15b, 0x5, 0x4a, 0x26, 
    0x2, 0x15a, 0x153, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x158, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x15c, 0x15d, 0x7, 0x13, 0x2, 0x2, 0x15d, 0x15e, 0x5, 0x2a, 0x16, 0x2, 
    0x15e, 0x29, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x161, 0x7, 0x1f, 0x2, 0x2, 
    0x160, 0x162, 0x5, 0x2c, 0x17, 0x2, 0x161, 0x160, 0x3, 0x2, 0x2, 0x2, 
    0x161, 0x162, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 
    0x163, 0x164, 0x7, 0x20, 0x2, 0x2, 0x164, 0x165, 0x5, 0x4, 0x3, 0x2, 
    0x165, 0x166, 0x7, 0x8, 0x2, 0x2, 0x166, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x167, 
    0x16a, 0x5, 0x14, 0xb, 0x2, 0x168, 0x169, 0x7, 0x11, 0x2, 0x2, 0x169, 
    0x16b, 0x7, 0x1e, 0x2, 0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 
    0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16c, 
    0x16e, 0x7, 0x1e, 0x2, 0x2, 0x16d, 0x167, 0x3, 0x2, 0x2, 0x2, 0x16d, 
    0x16c, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x171, 
    0x7, 0x23, 0x2, 0x2, 0x170, 0x172, 0x5, 0x30, 0x19, 0x2, 0x171, 0x170, 
    0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 
    0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x7, 0x24, 0x2, 0x2, 0x174, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x175, 0x17b, 0x5, 0x32, 0x1a, 0x2, 0x176, 0x177, 
    0x5, 0x34, 0x1b, 0x2, 0x177, 0x178, 0x5, 0x32, 0x1a, 0x2, 0x178, 0x17a, 
    0x3, 0x2, 0x2, 0x2, 0x179, 0x176, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17d, 
    0x3, 0x2, 0x2, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x180, 0x5, 0x34, 0x1b, 0x2, 0x17f, 0x17e, 
    0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 0x180, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x182, 0x7, 0x21, 0x2, 0x2, 0x182, 0x183, 0x5, 
    0x18, 0xd, 0x2, 0x183, 0x184, 0x7, 0x22, 0x2, 0x2, 0x184, 0x185, 0x7, 
    0x4, 0x2, 0x2, 0x185, 0x186, 0x5, 0x18, 0xd, 0x2, 0x186, 0x18c, 0x3, 
    0x2, 0x2, 0x2, 0x187, 0x188, 0x7, 0x3a, 0x2, 0x2, 0x188, 0x189, 0x7, 
    0x4, 0x2, 0x2, 0x189, 0x18c, 0x5, 0x18, 0xd, 0x2, 0x18a, 0x18c, 0x5, 
    0x18, 0xd, 0x2, 0x18b, 0x181, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x187, 0x3, 
    0x2, 0x2, 0x2, 0x18b, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x18e, 0x9, 0x2, 0x2, 0x2, 0x18e, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x190, 0x7, 0x25, 0x2, 0x2, 0x190, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x191, 0x192, 0x7, 0x26, 0x2, 0x2, 0x192, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x193, 0x194, 0x9, 0x3, 0x2, 0x2, 0x194, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x196, 0x7, 0x2b, 0x2, 0x2, 0x196, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x197, 0x198, 0x9, 0x4, 0x2, 0x2, 0x198, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x199, 
    0x19a, 0x9, 0x5, 0x2, 0x2, 0x19a, 0x41, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 
    0x9, 0x6, 0x2, 0x2, 0x19c, 0x43, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x9, 
    0x7, 0x2, 0x2, 0x19e, 0x45, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 0x39, 
    0x2, 0x2, 0x1a0, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x9, 0x8, 0x2, 
    0x2, 0x1a2, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x9, 0x9, 0x2, 0x2, 
    0x1a4, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x26, 0x52, 0x56, 0x7c, 0x81, 0x8d, 
    0xa7, 0xa9, 0xb2, 0xb8, 0xbc, 0xbf, 0xca, 0xcf, 0xd6, 0xde, 0xe6, 0xf6, 
    0x118, 0x11a, 0x121, 0x128, 0x12f, 0x137, 0x13c, 0x142, 0x14b, 0x14f, 
    0x155, 0x15a, 0x161, 0x16a, 0x16d, 0x171, 0x17b, 0x17f, 0x18b, 
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

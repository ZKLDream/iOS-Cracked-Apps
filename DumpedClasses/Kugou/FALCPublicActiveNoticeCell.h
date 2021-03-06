//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FALCBaseChatCell.h"

@class FAOHAttributedLabel, NSDictionary, NSMutableAttributedString;

@interface FALCPublicActiveNoticeCell : FALCBaseChatCell
{
    CDUnknownBlockType _onClickHandler;
    NSDictionary *_msgDic;
    FAOHAttributedLabel *_attributedLabel;
    NSMutableAttributedString *_mutString;
}

+ (double)cellHeightOfMsg:(id)arg1 maxWidth:(double)arg2;
+ (id)parserStyleData:(id)arg1;
+ (id)getContenColor;
@property(retain, nonatomic) NSMutableAttributedString *mutString; // @synthesize mutString=_mutString;
@property(retain, nonatomic) FAOHAttributedLabel *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
@property(retain, nonatomic) NSDictionary *msgDic; // @synthesize msgDic=_msgDic;
@property(copy, nonatomic) CDUnknownBlockType onClickHandler; // @synthesize onClickHandler=_onClickHandler;
- (void).cxx_destruct;
- (void)updateView;
- (void)layoutSubviews;
- (void)setMessage:(id)arg1;
- (void)tapGestureHandle;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


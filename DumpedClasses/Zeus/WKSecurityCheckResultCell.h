//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKSecurityBaseCell.h"

@class UIImageView, UILabel;

@interface WKSecurityCheckResultCell : WKSecurityBaseCell
{
    UILabel *_checkTitle;
    UILabel *_checkResult;
    UIImageView *_checkResultLogo;
}

@property(retain, nonatomic) UIImageView *checkResultLogo; // @synthesize checkResultLogo=_checkResultLogo;
@property(retain, nonatomic) UILabel *checkResult; // @synthesize checkResult=_checkResult;
@property(retain, nonatomic) UILabel *checkTitle; // @synthesize checkTitle=_checkTitle;
- (void).cxx_destruct;
- (void)setSecurityObj:(id)arg1;
- (void)layoutAllSubviews;
- (void)setupSubViews;

@end


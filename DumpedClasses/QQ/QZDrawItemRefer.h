//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZDrawItemText.h"

@class NSString, UIColor;

@interface QZDrawItemRefer : QZDrawItemText
{
    _Bool _isHighlight;
    int _actionType;
    NSString *_appName;
    NSString *_actionUrl;
    NSString *_downloadUrl;
    NSString *_appId;
    UIColor *_highlightColor;
}

@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) _Bool isHighlight; // @synthesize isHighlight=_isHighlight;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)getDrawItemVoiceText;
- (void)draw;
- (id)initWithAppName:(id)arg1 actionUrl:(id)arg2 appId:(id)arg3 actionType:(int)arg4 Rect:(struct CGRect)arg5 Font:(id)arg6 Color:(id)arg7;

@end

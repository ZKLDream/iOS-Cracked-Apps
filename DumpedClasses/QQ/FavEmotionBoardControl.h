//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIFaceKeyBoard, UIView;

@interface FavEmotionBoardControl : NSObject
{
    UIView *_parentView;
    UIFaceKeyBoard *_emotionBoard;
    id _delegate;
}

@property(readonly, retain, nonatomic) UIFaceKeyBoard *emotionBoard; // @synthesize emotionBoard=_emotionBoard;
- (_Bool)isShown;
- (void)remove;
- (void)hide;
- (void)show;
- (void)clickFlipRightPageBtn;
- (void)clickFlipLeftPageBtn;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 textDelegate:(id)arg2;

@end


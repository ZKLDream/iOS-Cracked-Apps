//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImage;

@interface NVMFeedBackPaintingView : UIView
{
    CDUnknownBlockType _paintBeginHandler;
    CDUnknownBlockType _paintOverHandler;
    UIImage *_backgroundImage;
    NSMutableArray *_paintPointArrayContainer;
}

@property(retain, nonatomic) NSMutableArray *paintPointArrayContainer; // @synthesize paintPointArrayContainer=_paintPointArrayContainer;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) CDUnknownBlockType paintOverHandler; // @synthesize paintOverHandler=_paintOverHandler;
@property(copy, nonatomic) CDUnknownBlockType paintBeginHandler; // @synthesize paintBeginHandler=_paintBeginHandler;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)clearPath;
- (void)touchOverOrCanceled;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithPaintBackgroundImage:(id)arg1;

@end


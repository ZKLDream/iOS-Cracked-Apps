//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSDate, NSMutableArray;
@protocol QYPPAttributedLabelDelegate;

@interface QYPPAttributedLabel : UITextView
{
    _Bool _isresponsealready;
    id <QYPPAttributedLabelDelegate> _attributedDelegate;
    NSMutableArray *_linkAttributedArray;
    NSDate *_touchBeginTimestamp;
    long long _textLineSpaceHeight;
    struct CGPoint _startTouchPosition;
}

@property(nonatomic) struct CGPoint startTouchPosition; // @synthesize startTouchPosition=_startTouchPosition;
@property(nonatomic) long long textLineSpaceHeight; // @synthesize textLineSpaceHeight=_textLineSpaceHeight;
@property(nonatomic) _Bool isresponsealready; // @synthesize isresponsealready=_isresponsealready;
@property(retain, nonatomic) NSDate *touchBeginTimestamp; // @synthesize touchBeginTimestamp=_touchBeginTimestamp;
@property(retain, nonatomic) NSMutableArray *linkAttributedArray; // @synthesize linkAttributedArray=_linkAttributedArray;
@property(nonatomic) __weak id <QYPPAttributedLabelDelegate> attributedDelegate; // @synthesize attributedDelegate=_attributedDelegate;
- (void).cxx_destruct;
- (void)sizeToFitReSetWidth:(long long)arg1;
- (void)setAttributedStringArray:(id)arg1 widthToFit:(long long)arg2 fontForEventSpace:(id)arg3 lineSpaceHeight:(long long)arg4;
- (void)addGestureRecognizer:(id)arg1;
- (void)copyAllContent:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


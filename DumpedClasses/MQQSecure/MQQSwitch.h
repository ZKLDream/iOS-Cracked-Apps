//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MQQSwitchThumb, MQQSwitchTrack, NSString, UIPanGestureRecognizer, UISwitch, UITapGestureRecognizer;

@interface MQQSwitch : UIControl <UIGestureRecognizerDelegate>
{
    _Bool _isCustomType;
    UISwitch *_systemSwitch;
    SEL _userSel;
    id _userTarget;
    _Bool _lastIsOn;
    _Bool _isOn;
    _Bool _isMoving;
    _Bool _isTap;
    MQQSwitchTrack *_track;
    MQQSwitchThumb *_thumb;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) MQQSwitchThumb *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) MQQSwitchTrack *track; // @synthesize track=_track;
- (void)mqqSwitchValueChanged:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setThumbOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setThumbIsTracking:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setThumbIsTracking:(_Bool)arg1;
- (void)_setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_isOn;
- (void)toggleState;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didDrag:(id)arg1;
- (void)didTap:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)configureSwitch;
- (void)setOffTintColor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


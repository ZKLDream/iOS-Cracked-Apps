//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MASConstraintDelegate-Protocol.h"

@class MASConstraint, NSMutableArray, NSString, UIView;

@interface MASConstraintMaker : NSObject <MASConstraintDelegate>
{
    _Bool _updateExisting;
    _Bool _removeExisting;
    MASConstraint *_leftMargin;
    MASConstraint *_rightMargin;
    MASConstraint *_topMargin;
    MASConstraint *_bottomMargin;
    MASConstraint *_leadingMargin;
    MASConstraint *_trailingMargin;
    MASConstraint *_centerXWithinMargins;
    MASConstraint *_centerYWithinMargins;
    UIView *_view;
    NSMutableArray *_constraints;
}

@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool removeExisting; // @synthesize removeExisting=_removeExisting;
@property(nonatomic) _Bool updateExisting; // @synthesize updateExisting=_updateExisting;
@property(readonly, nonatomic) MASConstraint *centerYWithinMargins; // @synthesize centerYWithinMargins=_centerYWithinMargins;
@property(readonly, nonatomic) MASConstraint *centerXWithinMargins; // @synthesize centerXWithinMargins=_centerXWithinMargins;
@property(readonly, nonatomic) MASConstraint *trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(readonly, nonatomic) MASConstraint *leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(readonly, nonatomic) MASConstraint *bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(readonly, nonatomic) MASConstraint *topMargin; // @synthesize topMargin=_topMargin;
@property(readonly, nonatomic) MASConstraint *rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, nonatomic) MASConstraint *leftMargin; // @synthesize leftMargin=_leftMargin;
- (void).cxx_destruct;
- (CDUnknownBlockType)group;
@property(readonly, nonatomic) MASConstraint *center;
@property(readonly, nonatomic) MASConstraint *size;
@property(readonly, nonatomic) MASConstraint *edges;
@property(readonly, nonatomic) CDUnknownBlockType attributes;
@property(readonly, nonatomic) MASConstraint *baseline;
@property(readonly, nonatomic) MASConstraint *centerY;
@property(readonly, nonatomic) MASConstraint *centerX;
@property(readonly, nonatomic) MASConstraint *height;
@property(readonly, nonatomic) MASConstraint *width;
@property(readonly, nonatomic) MASConstraint *trailing;
@property(readonly, nonatomic) MASConstraint *leading;
@property(readonly, nonatomic) MASConstraint *bottom;
@property(readonly, nonatomic) MASConstraint *right;
@property(readonly, nonatomic) MASConstraint *top;
@property(readonly, nonatomic) MASConstraint *left;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (id)addConstraintWithAttributes:(long long)arg1;
- (id)constraint:(id)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (void)constraint:(id)arg1 shouldBeReplacedWithConstraint:(id)arg2;
- (id)install;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


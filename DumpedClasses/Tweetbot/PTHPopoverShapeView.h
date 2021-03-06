//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHShapeView.h"

@interface PTHPopoverShapeView : PTHShapeView
{
    long long _arrowDirection;
    double _arrowBase;
    double _arrowHeight;
    double _arrowOffset;
}

@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) double arrowBase; // @synthesize arrowBase=_arrowBase;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)contentInsets;
- (struct CGRect)roundedRectForBounds:(struct CGRect)arg1;
- (struct CGPath *)newPopoverPath:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


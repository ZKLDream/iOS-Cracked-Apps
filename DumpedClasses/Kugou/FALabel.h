//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSArray, UIColor;

@interface FALabel : UILabel
{
    double shadowBlur;
    UIColor *innerShadowColor;
    NSArray *gradientColors;
    unsigned long long oversampling;
    unsigned long long minSamples;
    unsigned long long maxSamples;
    struct CGSize innerShadowOffset;
    struct CGPoint gradientStartPoint;
    struct CGPoint gradientEndPoint;
    struct UIEdgeInsets textInsets;
}

@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets;
@property(nonatomic) unsigned long long maxSamples; // @synthesize maxSamples;
@property(nonatomic) unsigned long long minSamples; // @synthesize minSamples;
@property(nonatomic) unsigned long long oversampling; // @synthesize oversampling;
@property(nonatomic) struct CGPoint gradientEndPoint; // @synthesize gradientEndPoint;
@property(nonatomic) struct CGPoint gradientStartPoint; // @synthesize gradientStartPoint;
@property(copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors;
@property(retain, nonatomic) UIColor *innerShadowColor; // @synthesize innerShadowColor;
@property(nonatomic) struct CGSize innerShadowOffset; // @synthesize innerShadowOffset;
@property(nonatomic) double shadowBlur; // @synthesize shadowBlur;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)color:(struct CGColor *)arg1 blendedWithColor:(struct CGColor *)arg2;
- (void)getComponents:(double *)arg1 forColor:(struct CGColor *)arg2;
@property(retain, nonatomic) UIColor *gradientEndColor;
@property(retain, nonatomic) UIColor *gradientStartColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDefaults;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FALCBaseAnimationBean.h"

@interface FALCLoveAnimationBean : FALCBaseAnimationBean
{
    double _interval;
    double _imageDuration;
    unsigned long long _imageLoop;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) unsigned long long imageLoop; // @synthesize imageLoop=_imageLoop;
@property(nonatomic) double imageDuration; // @synthesize imageDuration=_imageDuration;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (id)init;

@end


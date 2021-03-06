//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIImage, UIImageView;

@interface NVMPhoto : NSObject
{
    _Bool _shouldAnimateBack;
    NSURL *_imageURL;
    UIImage *_placeHoldImage;
    UIImageView *_sourceImageView;
    NSString *_title;
    NSString *_detailDescription;
    struct CGRect _visibleArea;
}

@property(nonatomic) _Bool shouldAnimateBack; // @synthesize shouldAnimateBack=_shouldAnimateBack;
@property(copy, nonatomic) NSString *detailDescription; // @synthesize detailDescription=_detailDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGRect visibleArea; // @synthesize visibleArea=_visibleArea;
@property(nonatomic) __weak UIImageView *sourceImageView; // @synthesize sourceImageView=_sourceImageView;
@property(copy, nonatomic) UIImage *placeHoldImage; // @synthesize placeHoldImage=_placeHoldImage;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)init;

@end


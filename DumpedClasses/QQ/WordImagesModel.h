//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HighBoomModel.h"

@class NSArray, NSString;

@interface WordImagesModel : HighBoomModel
{
    NSArray *_image_size;
    NSArray *_image_position;
    NSString *_image_rotation;
    NSString *_image_name;
}

@property(copy, nonatomic) NSString *image_name; // @synthesize image_name=_image_name;
@property(copy, nonatomic) NSString *image_rotation; // @synthesize image_rotation=_image_rotation;
@property(retain, nonatomic) NSArray *image_position; // @synthesize image_position=_image_position;
@property(retain, nonatomic) NSArray *image_size; // @synthesize image_size=_image_size;
- (void)dealloc;

@end


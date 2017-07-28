//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHNoteImageInfo : XYRKModel
{
    NSString *_url;
    long long _width;
    NSString *_original;
    long long _height;
    double _longitude;
    double _latitude;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *original; // @synthesize original=_original;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

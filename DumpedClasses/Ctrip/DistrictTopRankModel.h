//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSString;

@interface DistrictTopRankModel : CTBusinessBean <NSCoding>
{
    NSString *title;
    int rankId;
    NSString *rankImgUrl;
    NSString *labelImageUrl;
    NSString *percentDesc;
}

@property(copy, nonatomic) NSString *percentDesc; // @synthesize percentDesc;
@property(copy, nonatomic) NSString *labelImageUrl; // @synthesize labelImageUrl;
@property(copy, nonatomic) NSString *rankImgUrl; // @synthesize rankImgUrl;
@property(nonatomic) int rankId; // @synthesize rankId;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseGetInput.h"

@class NSString;

@interface FXCMobileSongModel : FXBaseGetInput
{
    NSString *_keyword;
    long long _page;
    long long _pageSize;
    NSString *_iscorrection;
}

@property(retain, nonatomic) NSString *iscorrection; // @synthesize iscorrection=_iscorrection;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface CTJumpModel2H5 : NSObject
{
    NSString *_urlH5Prefix;
    NSString *_moduleNameOfH5;
    NSString *_jumpCodeOfUri;
    NSMutableDictionary *_paramOfUriMap;
}

@property(retain, nonatomic) NSMutableDictionary *paramOfUriMap; // @synthesize paramOfUriMap=_paramOfUriMap;
@property(copy, nonatomic) NSString *jumpCodeOfUri; // @synthesize jumpCodeOfUri=_jumpCodeOfUri;
@property(copy, nonatomic) NSString *moduleNameOfH5; // @synthesize moduleNameOfH5=_moduleNameOfH5;
@property(copy, nonatomic) NSString *urlH5Prefix; // @synthesize urlH5Prefix=_urlH5Prefix;
- (void).cxx_destruct;
- (id)getURL;
- (id)init;

@end


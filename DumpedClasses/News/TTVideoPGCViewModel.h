//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<TTVideoPGC>, NSString;

@interface TTVideoPGCViewModel : JSONModel
{
    NSString *_openUrl;
    NSString *_message;
    NSString *_defaultDesc;
    NSArray<TTVideoPGC> *_pgcList;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSArray<TTVideoPGC> *pgcList; // @synthesize pgcList=_pgcList;
@property(copy, nonatomic) NSString *defaultDesc; // @synthesize defaultDesc=_defaultDesc;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
- (void).cxx_destruct;

@end

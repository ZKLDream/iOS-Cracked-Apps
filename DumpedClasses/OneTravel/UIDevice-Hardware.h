//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDevice.h"

@interface UIDevice (Hardware)
+ (void)one_isWifiEnabledAsyncBlock:(CDUnknownBlockType)arg1;
+ (_Bool)isWiFiEnabled;
+ (long long)one_totalDiskSpaceBytes;
+ (long long)one_freeDiskSpaceBytes;
+ (unsigned long long)one_freeMemoryBytes;
+ (unsigned long long)one_totalMemoryBytes;
+ (unsigned long long)one_cpuNumber;
+ (unsigned long long)one_ramSize;
+ (unsigned long long)one_busFrequency;
+ (unsigned long long)one_cpuFrequency;
+ (unsigned long long)getSysInfo:(unsigned int)arg1;
+ (_Bool)one_hasCamera;
+ (id)one_systemVersion;
+ (id)macAddress;
- (_Bool)one_isIphoneWith4inchDisplay;
- (struct CGSize)one_backCameraStillImageResolutionInPixels;
- (_Bool)one_isCurrentDeviceHardwareBetterThan:(int)arg1;
- (float)hardwareNumber:(int)arg1;
- (id)one_hardwareSimpleDescription;
- (id)one_hardwareDescription;
- (int)one_hardware;
- (id)one_hardwareString;
@end


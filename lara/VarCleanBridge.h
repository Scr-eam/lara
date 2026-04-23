#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VarCleanBridge : NSObject

+ (NSDictionary *)loadRulesNamed:(NSString *)resourceName
                        inBundle:(NSBundle *)bundle
                           error:(NSError * _Nullable * _Nullable)error;

+ (BOOL)probePathExists:(NSString *)path
            isDirectory:(BOOL *)isDirectory
              isSymlink:(BOOL *)isSymlink;

@end

NS_ASSUME_NONNULL_END

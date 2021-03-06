Pod::Spec.new do |s|
  s.name         = "UploadTestSample"
  s.version      = "0.1.6"
  s.summary      = "third party app tracking SDK"
  s.description  = <<-DESC
	Upload Dot which is third party app tracking SDK
                   DESC
  s.homepage     = "https://github.com/WoncheolHeo/UploadTestSample"

  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'WoncheolHeo' => 'fornew21c@wisetracker.com' }
  s.ios.deployment_target = '9.0'

  s.source       = { :git => "https://github.com/WoncheolHeo/UploadTestSample.git", :tag => s.version.to_s }
# s.ios.vendored_frameworks = 'DOTTest.framework'
  s.resources = ["NotificationViewController.swift","Base.lproj"]
  s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
 # s.source_files  = "DOT/**/*.{h,m}"

#  s.subspec 'CouchbaseLite' do |ss|
#    ss.source_files = 'CouchbaseLite.framework/Headers/*.h'
#    ss.public_header_files = 'CouchbaseLite.framework/Headers/*.h'
#    ss.frameworks = 'CFNetwork', 'Security', 'SystemConfiguration', 'JavaScriptCore'
#    ss.libraries = 'z', 'c++', 'sqlite3'
#    ss.vendored_frameworks = 'CouchbaseLite.framework'
#    ss.xcconfig = {
#      'OTHER_LDFLAGS' => '-ObjC'
#    }
#    ss.preserve_paths = 'CouchbaseLite.framework'
#  end
end
